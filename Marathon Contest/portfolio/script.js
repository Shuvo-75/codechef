document.addEventListener("DOMContentLoaded", () => {

    // ======== Mobile Navigation ========
    const hamburger = document.querySelector(".hamburger");
    const navMenu = document.querySelector(".nav-menu");

    hamburger.addEventListener("click", () => {
        hamburger.classList.toggle("active");
        navMenu.classList.toggle("active");
    });

    document.querySelectorAll(".nav-link").forEach(n => n.addEventListener("click", () => {
        hamburger.classList.remove("active");
        navMenu.classList.remove("active");
    }));

    // ======== Dark Mode Toggle ========
    const darkModeToggle = document.querySelector(".dark-mode-toggle");
    const body = document.body;

    // Check for saved dark mode preference
    if (localStorage.getItem("dark-mode") === "enabled") {
        body.classList.add("dark-mode");
    }

    darkModeToggle.addEventListener("click", () => {
        body.classList.toggle("dark-mode");
        // Save preference to localStorage
        if (body.classList.contains("dark-mode")) {
            localStorage.setItem("dark-mode", "enabled");
        } else {
            localStorage.setItem("dark-mode", "disabled");
        }
    });

    // ======== Portfolio Filtering ========
    const filterButtons = document.querySelectorAll(".filter-btn");
    const portfolioItems = document.querySelectorAll(".portfolio-item");

    filterButtons.forEach(button => {
        button.addEventListener("click", () => {
            // Remove active class from all buttons
            filterButtons.forEach(btn => btn.classList.remove("active"));
            // Add active class to clicked button
            button.classList.add("active");

            const filter = button.dataset.filter;

            portfolioItems.forEach(item => {
                if (filter === "all" || item.dataset.category === filter) {
                    item.classList.remove("hide");
                } else {
                    item.classList.add("hide");
                }
            });
        });
    });

    // ======== Lightbox Functionality ========
    const lightbox = document.getElementById("lightbox");
    const lightboxImg = document.getElementById("lightbox-img");
    const lightboxCaption = document.getElementById("lightbox-caption");
    const lightboxClose = document.querySelector(".lightbox-close");

    portfolioItems.forEach(item => {
        item.addEventListener("click", () => {
            const img = item.querySelector("img");
            const caption = img.alt; // Use alt text as caption

            lightboxImg.src = img.src;
            lightboxCaption.textContent = caption;
            lightbox.classList.add("show");
        });
    });

    // Close lightbox
    lightboxClose.addEventListener("click", () => {
        lightbox.classList.remove("show");
    });

    // Close lightbox on background click
    lightbox.addEventListener("click", e => {
        if (e.target === lightbox) {
            lightbox.classList.remove("show");
        }
    });

    // ======== Animated Counters ========
    const counters = document.querySelectorAll(".counter-number");

    const runCounter = (counter) => {
        const target = +counter.dataset.target;
        const increment = target / 200; // Speed of the counter
        let count = 0;

        const updateCount = () => {
            count += increment;
            if (count < target) {
                counter.innerText = Math.ceil(count);
                setTimeout(updateCount, 10);
            } else {
                counter.innerText = target;
            }
        };
        updateCount();
    };

    // Use Intersection Observer to trigger counters when visible
    const observer = new IntersectionObserver((entries, observer) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                runCounter(entry.target);
                observer.unobserve(entry.target); // Run only once
            }
        });
    }, { threshold: 0.5 }); // Trigger when 50% visible

    counters.forEach(counter => {
        observer.observe(counter);
    });

    // ======== Testimonial Slider ========
    const slides = document.querySelectorAll(".testimonial-slide");
    const prevBtn = document.querySelector(".prev-btn");
    const nextBtn = document.querySelector(".next-btn");
    let currentSlide = 0;

    function showSlide(n) {
        slides.forEach(slide => slide.classList.remove("active"));
        slides[n].classList.add("active");
    }

    function nextSlide() {
        currentSlide = (currentSlide + 1) % slides.length;
        showSlide(currentSlide);
    }

    function prevSlide() {
        currentSlide = (currentSlide - 1 + slides.length) % slides.length;
        showSlide(currentSlide);
    }

    prevBtn.addEventListener("click", prevSlide);
    nextBtn.addEventListener("click", nextSlide);

    // Auto-play slider (optional)
    // setInterval(nextSlide, 7000); // Change slide every 7 seconds

    // ======== Contact Form (Mockup) ========
    // This is a static site, so the form won't actually send an email.
    // This script just prevents default submission and shows a success message.
    const contactForm = document.getElementById("contact-form");
    const formStatus = document.querySelector(".form-status");

    contactForm.addEventListener("submit", e => {
        e.preventDefault();
        formStatus.textContent = "Thank you! Your message has been (mock) sent.";
        contactForm.reset();
        setTimeout(() => {
            formStatus.textContent = "";
        }, 3000);
    });
});