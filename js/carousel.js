
$(document).ready(function () {
  // CERTIFICADOS
  $('.jcert').slick({
    autoplay: true,
    autoplaySpeed: 1000,
    centerMode: true,
    adaptiveHeight: true,
    arrows: false,
    responsive: [
      {
        breakpoint: 5000,
        settings: {
          slidesToShow: 7
        }
      },
      {
        breakpoint: 920,
        settings: {
          slidesToShow: 6
        }
      }, {
        breakpoint: 820,
        settings: {
          slidesToShow: 5
        }
      },
      {
        breakpoint: 720,
        settings: {
          slidesToShow: 4
        }
      },
      {
        breakpoint: 620,
        settings: {
          slidesToShow: 3
        }
      },
      {
        breakpoint: 420,
        settings: {
          slidesToShow: 2
        }
      },
      {
        breakpoint: 320,
        settings: {
          slidesToShow: 1
        }
      }
    ]
  });
  // PROJETOS
  $('.jproj').slick({
    infinite: true,
    speed: 300,
    dots: false,
    arrows: false,
    autoplay: true,
    centerMode: true,
    centerPadding: '60px',
    slidesToShow: 2,
    responsive: [
      {
        breakpoint: 1024,
        settings: {
          arrows: false,
          centerMode: true,
          centerPadding: '40px',
          slidesToShow: 1 
        }
        },
      {
        breakpoint: 768,
        settings: {
          arrows: false,
          centerMode: true,
          centerPadding: '40px',
          slidesToShow: 1
        }
      },
      {
        breakpoint: 480,
        settings: {
          arrows: false,
          centerMode: true,
          centerPadding: '40px',
          slidesToShow: 1
        }
      }
    ]
  });
});
