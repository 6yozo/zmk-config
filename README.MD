The Lottie keyboard layout
===

The Lottie keyboard layout is inspired by the Miryoku layout. The
layers on the Lottie keyboard layout are devided into two categories.

- The Colmak-DOX language layouts, which lets you type prose in
  English and Hungarian.

- The Lottie layers for navigation, function keys, typing numbers and
  media functions.

General Design Goals
---

- Prefer typing with rolling keypresses. Rolling means overlapping
  keypresses like: Key1 down, Key2 down, Key1 up, Key2 up.

- Every functionality is accessible by using a single finger only.

- Every button on the US ANSI layout have an equivalent on the Lottie
  layout.

- Alternate keypresses between hands as much as posible.

- There is no Right Alt(Alt Gr) key on the layout.

- The Colmak-DOX layers comprise letters, accents, punctuations, and
  modifiers for writing prose only.

- There are no home row mods on the base layers, the tap-hold
  behaviour is not typing friendly, especially when you are rolling
  from key to key.

- One shot modifiers are on the media and function layer.

- The buttons that switch to the Media and the Nav layer are on a
  dedicated single function thumb key. Dual function keys do not
  activate one shot modifiers on the Nav and Media layer when typing
  fast (rolling).

- The delete key is only on the nav layer.

- The ESC key is on the function layer. It remains in its original
  location. The APP key is on to the outer thumb key. The TAB key is
  not on the layer.

Colemak-DOX
---

I have created the Colemak-DOX layout to support accent
layers. Colmak-DOX enables typing Hungarian texts besides English.

Design goals:

- Create three distinct layers for the Hungarian accents.

- Keep as much similarity to Colemak-DH as possible.

- Keep the base layer English oriented.

- Do not change thumb keys.

- Optimize for typing prose over other activities.

- All punctuation is available as a single keypress without the need
  to use the SHIFT modifier. Punctuations are: '.,;:!?'"-'. I have also
  added: '/<>', because this three is placed with keys having punctuations on
  the english layout.

- Avoid SFBs when typing accents.

Rational:
---

English oriented base layer means that one can type English texts
using the base layer alone.

- Thumb keys rarely contain letters, they are mostly modifiers or
  layer switching keys. If we do not change the thumb keys, then we
  can keep the similarity to widespread layouts like Miryoku or
  Seniply.

- When holding a cat in your arm, you still can use your other hand to
  type.

Implementation
---

I have mirrored the Q, Z and X keys on the Colemak-DH layout and mixed
up the punctuations a little. I think that mirroring is easy to learn.


Capital X marks the unused keys.

### English Layer

```
,  w  f  p  b  j  l  u  y  q
a  r  s  t  g  m  n  e  i  o
.  '  c  d  v  k  h  /  x  z
```

### Acute Layer
```
X  X  X  X  X  X  X  ú  X  X
X  X  X  X  X  X  ,  é  í  ó
X  X  X  X  X  X  <  X  X  X
```

### Acute 2 Layer
```
X  X  X  X  X  X  X  X  X  X
á  '  "  .  X  X  X  X  X  X
X  X  X  >  X  X  X  X  X  X
```

### Double Acute Layer
```
X  X  X  X  X  X  X  ü  X  X
X  X  X  X  X  X  !  ;  /  ő
X  X  X  X  X  X  X  X  X  X
```

### Diaresis Layer
```
X  X  X  X  X  X  X  ü  X  X
X  X  X  X  X  X  -  ?  :  ö
X  X  X  X  X  X  X  X  X  X
```

### Experiments:

```
b l x g v j p ' u ,
n s r t k q h e i o
c w z m f y d / . a
```

```
b c l w q  k p u . a
n s r t v  y h e i o
x g j m z  f d ' , /
```

```
b a l m z  k p u c .
n o r t v  y h e s i
x / j w q  f d ' g ,
```

When generating layouts I would like use different weights than the
Colemak-DH Typing Effort Model.
- For me the lower row keys are more comfortable than the upper row
  keys.
- Pressing buttons with the middle finger is more comfortable than
  with index finger(probably because it is longer).

Tap Hold and typing
---

Tap-hold buttons work the best if you can use them as if they are in
the same column. They become SFBs no matter where they are on the
keyboard.
