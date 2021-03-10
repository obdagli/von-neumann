## Von Neumann's Neighbourhood

### Programın çalışma mantığı

Girilen N değerine göre ekranda siyah noktaları boyama işlemi için, “bdcounter” adında sayaç vari dizi tanımladık. Ana dizimiz için ise “arr” değişkenini kullanacağız. Programın başında “n” değeri kullanıcıdan istenir ve girilen “n” değerine göre dizi uzunluğunu bulduğumuz `“arrlen=2*n+3”` formulü kullanılır ve arrlen değişkenine uzunluk atanır. Kullanacağımız her iki dizi için bellekte yer ayırma işlemini yapıyoruz daha sonra “von neumann’s neighbourhood” yöntemi kullanılmak üzere “vonneumann” fonksiyonuna gönderiyoruz.

 - ### Von neumann's neighbourhood kuralı:

> “Siyahlarin satir numarasi ile matrisin origin noktasindaki elemanin
> satir numarasi farkı ve siyahlarin sutun numarasi ve matrisin origin
> noktasindaki elemanin sutun numarasi farkinin toplami N degerine kucuk
> veya esit olmali(mutlak degerce)"

*Fonksiyonu pointer şeklinde tanımadık çünkü bir pointer döndürüyoruz.
(count dizisi) İşlemlerin sonunda print fonksiyonu ile klasik matris yazdırma işlemi ile ekrana yazdırıyoruz.*

### Ekran görüntüsü


![image](https://user-images.githubusercontent.com/56681549/110589350-574a7e80-8187-11eb-8aea-b064a29674c0.png)
