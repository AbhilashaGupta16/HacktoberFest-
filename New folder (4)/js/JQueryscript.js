var swiper = new Swiper('.swiper-container', {
    spaceBetween: 0,
    effect: 'fade',
    pagination: {
      el: '.swiper-pagination',
      clickable: true,
    },
    navigation: {
      nextEl: '.swiper-button-next',
      prevEl: '.swiper-button-prev',
    },
  });
 
 /*Responsive Navigation*/
 $(document).ready(function(){
$('.toggle').click(function(){
 $('.toggle').toggleClass('active')
 
 $('nav ul').toggleClass('active-menu')

 
})
});