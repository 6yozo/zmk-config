The 6yozu keyboard layout
===

The 6yozu keyboard layout is based on the Miryoku layout. The core of
the layout is the Colmak-DOX language layout, which lets you type
prose in English and Hungarian.

General Design Goals
---

- Every button on the US ANSI layout should have an equivalent on the
  6yozu layout.

- Prefer typing with rolling keypresses. Rolling means overlapping
  keypresses like: Key1 down, Key2 down, Key1 up, Key2 up.

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
  to use the SHIFT modifier. Punctuations: .,;:!?'"-

- Avoid SFBs when typing accents.

Rational:
---

English oriented base layer means that one can type English texts
using the base layer alone.

- Thumb keys rarely contain letters, they are mostly modifiers or
  layer switching keys. If we do not change the thumb keys, then we
  can keep the similarity to widespread layouts like Miryoku or
  Seniply.

Implementation
---

I have mirrored the Q, Z and X keys on the Colemak-DH layout and mixed
up the punctuations a little. I think that mirroring is easy to learn.

### English Prose Layer

```
,  w  f  p  b  j  l  u  y  q
a  r  s  t  g  m  n  e  i  o
.  '  c  d  v  k  h  /  x  z
```

experiments:

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

### Acute Prose Layer

### Double Acute Prose Layer

### Diaresis Prose Layer

Tap Hold and typing
---

Tap-hold buttons work the best if you can use them as if they are in
the same column. They become SFBs no matter where they are on the
keyboard.
