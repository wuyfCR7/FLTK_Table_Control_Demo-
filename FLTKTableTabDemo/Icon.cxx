#include "Icon.h"

const char* WINDOW_ICON_TRANSFORMER[] = {
"128 128 256 2 ",
"   c #041303D60373",
".  c #0A0A04880279",
"X  c #04D4096103C9",
"o  c #0AF30A650366",
"O  c #046D03DF0A51",
"+  c #095C047B0AE0",
"@  c #0595094C0A24",
"#  c #0B0E0B0E0C4E",
"$  c #13460B7602A3",
"%  c #150F08C10440",
"&  c #119A0CDD0BBC",
"*  c #0DFC10E50834",
"=  c #1B36132E03E9",
"-  c #122512410C73",
";  c #184A15D807A0",
":  c #04AD031B1202",
">  c #098A05921421",
",  c #0E2B0E1F1120",
"<  c #10F30E36136C",
"1  c #12CD0CC71B32",
"2  c #0EDE10AF138D",
"3  c #12C112C114BA",
"4  c #194018E7162C",
"5  c #15D6162C18CF",
"6  c #171218211A1B",
"7  c #19BD1A9F1CA5",
"8  c #24BC1A3B04D7",
"9  c #25BA1A370798",
"0  c #267C1D730FBA",
"q  c #1CDD20801777",
"w  c #2AE223420A60",
"e  c #35B328700AD5",
"r  c #3BE630DB0C0C",
"t  c #29A425C915A5",
"y  c #35552C4115F6",
"u  c #3A62342C1686",
"i  c #1717146A2379",
"p  c #1D081DEF21D8",
"a  c #20201DEB25F3",
"s  c #1EF3203723D7",
"d  c #20C921C625BB",
"f  c #2BAC2A2A24A5",
"g  c #395E37CA2500",
"h  c #454537100C80",
"j  c #55F333F90B46",
"k  c #468839B71658",
"l  c #67D33AB6095C",
"z  c #6C1639E41010",
"x  c #46D93CBD24C9",
"c  c #3D3D414122A3",
"v  c #4BF243761899",
"b  c #55EF49B011DF",
"n  c #56FF48DA19CE",
"m  c #6C2944EF098E",
"M  c #769449E2099D",
"N  c #7B2F560A0AF9",
"B  c #69F8492C14F8",
"V  c #76474A7F1449",
"C  c #6845579D1A3D",
"Z  c #7B5156C214C1",
"A  c #757564A919E7",
"S  c #4A4A46DB2778",
"D  c #55F249E6246B",
"F  c #57D8538D32CA",
"G  c #6856597D2626",
"H  c #701355E124DF",
"J  c #65155B0B34D5",
"K  c #5E5E60603B3B",
"L  c #788D671C28CA",
"P  c #729F6B762E39",
"I  c #6AFE673438E3",
"U  c #75C268E8338D",
"Y  c #5C5C59594040",
"T  c #73036E9B46B6",
"R  c #84734C3B0D96",
"E  c #86FB59610AA9",
"W  c #96695C72099A",
"Q  c #835A5C26136B",
"!  c #8645590B165B",
"~  c #95D55C8C1494",
"^  c #89F2660C0C91",
"/  c #9741689D0A95",
"(  c #878772720E0E",
")  c #9B49750D0C8F",
"_  c #8C1964D713E5",
"`  c #8C3F6BF4142E",
"'  c #894066C818D0",
"]  c #93B76C2A1379",
"[  c #971768C3167A",
"{  c #8D0C72B918B5",
"}  c #947472EA1474",
"|  c #9C047417131F",
" . c #9D387B4C13C3",
".. c #948E742E1B04",
"X. c #9B9B74741ABA",
"o. c #99F77ADE1BCB",
"O. c #A75A6AEA0889",
"+. c #B5B56AD107A1",
"@. c #A7B078EF0B8F",
"#. c #B6007B070A33",
"$. c #A3E36B9B15E6",
"%. c #A7FC77601717",
"&. c #A4407BC61407",
"*. c #AAFB7CA1139F",
"=. c #A38D7D081A13",
"-. c #B4E97C471666",
";. c #89A65B5B257B",
":. c #88F26A7325DF",
">. c #88AC75BC29F8",
",. c #97B178BB2580",
"<. c #94B1719C289A",
"1. c #872F76A53564",
"2. c #A5247C512432",
"3. c #B3B37D7D2222",
"4. c #C40C7BC40DC5",
"5. c #87877C3C4EEF",
"6. c #818174746565",
"7. c #9D9D840C17E5",
"8. c #AB3A859A0BC4",
"9. c #B86286A40B01",
"0. c #A76485AA14B9",
"q. c #ABF4846E13BB",
"w. c #A45483381B4C",
"e. c #AAE684011B1B",
"r. c #A5138ABD1C4F",
"t. c #AC488B4D1BF6",
"y. c #B3D483D61387",
"u. c #B4888B6814AB",
"i. c #B9C488FA1789",
"p. c #B4958BCF1B40",
"a. c #B1B19435153E",
"s. c #BC5F93931AFC",
"d. c #B9B696CC17A2",
"f. c #BE24A57219E7",
"g. c #9C2A8507276C",
"h. c #99EC86B336AF",
"j. c #92678A3437CD",
"k. c #A75F873F2645",
"l. c #AC498BEE22CB",
"z. c #A4798CA42BE9",
"x. c #B50F8BA62484",
"c. c #AA8993A32904",
"v. c #B49193C8238D",
"b. c #BBDE943A2307",
"n. c #B89C9A942833",
"m. c #A5EA8C3F361C",
"M. c #B0B08D8D3232",
"N. c #ABC9945933F4",
"B. c #AAA097C53824",
"V. c #B52399E33723",
"C. c #BCD8A427298A",
"Z. c #AFAFA4A43939",
"A. c #BA1DA4A9387C",
"S. c #CBE28F030C69",
"D. c #C6E895470CE0",
"F. c #C5FA8B9F16E2",
"G. c #C488940C13A3",
"H. c #C7EA9951177F",
"J. c #C4419C011B93",
"K. c #D43A9A0A1601",
"L. c #E2E29E1E1899",
"P. c #D462ACC90ED6",
"I. c #C86EA54118B5",
"U. c #CC40A3841BC6",
"Y. c #D6EFA90E19EB",
"T. c #D9F3B55919C4",
"R. c #E61EA96216FA",
"E. c #E624B8101AC7",
"W. c #F30CB5E81663",
"Q. c #C4209C3822EA",
"!. c #C78A9A0E2738",
"~. c #C89B9678290B",
"^. c #C8D3A7342768",
"/. c #D6F8AA0A256E",
"(. c #CC2BB5652A32",
"). c #D97BB6E627E4",
"_. c #C6CAAA1435A4",
"`. c #D575AC3C3535",
"'. c #CB3BB55437B8",
"]. c #D3DBBBAB33F4",
"[. c #D944B8A0361E",
"{. c #D46DBBD83C4B",
"}. c #E5E5AF1C264B",
"|. c #E677BAAE2718",
" X c #E408BD053572",
".X c #DDDDC1C11B1B",
"XX c #E86FC67A1B0C",
"oX c #F35DCBCB186E",
"OX c #DC14C4602A2A",
"+X c #CDCDC64534B5",
"@X c #DB9DC4B738B9",
"#X c #E8B9C6E92940",
"$X c #F39DCB752E6B",
"%X c #ED7FD39C2ACF",
"&X c #F56ED6992810",
"*X c #E50FC42733D7",
"=X c #E77CC9053831",
"-X c #EB59D5F8387E",
";X c #F56AD8B33787",
":X c #F11BE5BA38E3",
">X c #F7A8E63437DF",
",X c #990A89DF46B8",
"<X c #91D68C165228",
"1X c #A90C98BC4614",
"2X c #AC3C97BF5020",
"3X c #B946A647468A",
"4X c #B2A0A84353DD",
"5X c #9A3397B16316",
"6X c #A3A39F9F64BA",
"7X c #AC06A688684A",
"8X c #B547AA6167D5",
"9X c #B7D1B2F77258",
"0X c #C5EEAB6345A2",
"qX c #CA5DB6CC4774",
"wX c #D6CFBB0C45CF",
"eX c #C827AA8A5272",
"rX c #CA4AB92455A6",
"tX c #D6E7BB105645",
"yX c #E221BEBE4909",
"uX c #C8E4BBA96C35",
"iX c #DB8BC4D44383",
"pX c #D9A2C6BC4922",
"aX c #D9F4C7A65632",
"sX c #D80ACCB253AD",
"dX c #E5E9CA8346A5",
"fX c #F2F2CF4F44C5",
"gX c #E91FD589498C",
"hX c #F511D9C4458C",
"jX c #E420CC215625",
"kX c #E94DD75E581E",
"lX c #F2CDDC495959",
"zX c #F624E59F462F",
"xX c #EE5BE2745277",
"cX c #F4E4E5955BDC",
"vX c #D8BCC9EC6829",
"bX c #D129CB056FF0",
"nX c #D622CBFE76D0",
"mX c #DCCED6E479E5",
"MX c #E837D8E26757",
"NX c #E64CD0BF6CC2",
"BX c #F241DD8D66C6",
"VX c #E6E6DAF1783A",
"CX c #EDD7E4056868",
"ZX c #F507E5FD678D",
"AX c #FA79F2716EEF",
"SX c #EC4DE49876C9",
"DX c #F4B4E7677777",
"FX c #BEBEB9B98686",
"GX c #D227CDC2885D",
"HX c #EAEAD6D68202",
"JX c #E7C9DCEB84B1",
"KX c #EC91E5BF87E2",
"LX c #F3BDE98986A6",
"PX c #EBCDE6C8963B",
"IX c #F541F063957B",
"UX c #F1F1E868A726",
/* pixels */
"@ + + @ o # + # # # # # , # , # # , # , , 3 - , , , - , 3 3 3 3 3 3 4 3 3 3 3 3 5 5 3 3 5 3 5 3 6 5 1 3 5 3 3 3 3 3 2 2 - - , 2 - , 2 3 < < 3 3 3 3 5 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 , 3 2 , , - , , 2 , , # , # # , # # , @ # @ # # # O @ o O . @   . @     @   ",
"@ o o @ @ @ # @ @ # , # , # # # , , , , , , , , 3 3 , 3 , 3 3 3 3 3 3 3 3 1 3 5 5 3 3 4 3 3 3 3 3 3 3 3 3 3 3 3 , , - - , 5 3 3 3 3 3 - , < , , < 3 - , 3 , , 1 , 3 3 3 , 3 3 3 2 3 3 , 2 , , 2 , 3 , , , - , # # , # , # # # # + @ @ @ + o + @ . @   @ X + +   ",
"+ X + + @ o @ # # , , # , # , , , , , , 3 , , - , , 3 3 3 3 3 3 3 3 3 3 3 3 5 3 5 5 5 3 3 5 3 3 3 3 < < < < < , , , < < 2 # # # # , , > 2 2 , # , # & # * - * , , , 3 , 3 3 3 3 3 3 , 3 , 3 , , , 3 , - , , , # , # # , , # # # # + # # + @ @ o o O +   o   X   ",
"o @ o @ # + # # @ # # # # , , # , , , , , , 3 2 3 3 , 3 3 3 3 3 3 3 3 5 3 4 3 3 3 3 3 3 3 , 3 , < < , , < , # & o o @ + @ @ @ X X X o @ o X X X o # # , # # # , & , , , , , 3 , 3 , 3 3 3 3 3 3 3 , 3 , , , , , # , , @ # # , # # # # # o # # + @ X X + X X +   ",
"o + o + # # # # # # , , # # # , # , , - , 2 2 3 3 3 3 3 3 3 3 3 4 3 3 3 3 3 3 3 3 < , 2 2 - , # & + o + X . . O @ X X   + + O O O           O O     X X O O # @ O @ @ & , , , 2 - , 3 3 , 3 3 3 3 3 3 , 3 , , , , 2 * , , # # , # # # # # o @ # o + O o X + X   ",
"@ @ @ @ o + # # # , # # , , , # , - , 2 2 2 2 2 , , 3 3 3 3 3 3 3 4 3 3 3 3 , 3 < < , , # # o + O   . +     # % ; f y c F Y K T T T K Y S g u d 4 o X X     O     O @ @ # # # # , , , , 3 , 2 , 3 , 3 , , 3 - 3 , , , , # , # # # # # # # + o # @ @ @ + + X +   ",
"# # # # # # , # , # , # , # , , , , , 2 , , 2 2 3 2 , 2 - - 4 3 3 3 3 < 3 < 1 , & # @ + X       . % t D I <X8XuXGXKXIXIXIXPXIXPXPXPXIXIXIXIXIXPXPXFX9X6.K g ; X O O     O @ X @ # # # # & , , < , < , 3 , 2 < , , , # # # , # # # @ # o o o @ + o + o X + @ + X ",
"# # # # # # , # # # @ * @ @ o o o * @ , - , , , 2 3 3 3 - - 3 3 3 3 3 3 , # # O +     . . $ y J <X9XGXKXKXmXvXuXqX4X0X3XeX3XV.B.B.N.A.B.3X3XrXrXbXbXVXKXIXIXPXFX5XF ; @   X X   # + + * & & , , < & & - , < 2 # # * @ * # # @ o + @ X X . . . o o @ X + X + + X ",
"# # # # # , # # , # # # + + o + o # # # # & # & & < < 1 1 1 1 < , , & * X X       . 8 k P 8XnXVXvXrXB.B.c.z.c.N.B.B.Z.3X1XZ.m.z.z.z.z.z.B.V.B.B.B.Z.N.N.r.A.qXvXSXIXUXFX5.g * X     @ . o X # o & & < # * * * # # # # + + + + +     O O O X X @ + + O @ o @ @ + ",
"# # # # # , , # # # @ O     + + + + O O O + O @ o . o & & & # , # , #     X + = h L 2XvXeX3Xc.k.w.z.g.g.g.7.z.z.B.V.1XZ.Z.N.z.z.g.g.B.B.B.B.B.A.z.l.n.c.7.t.7.a.v.A.vXVXIXIXGX<Xy + X @ X O @ @ # > , # @ o @ + + + + > O + +   O O O O O   X   O o o . X + + X ",
"# # # , # # # , # @ +                           O   +   X X @ X +   + + . 9 D 2XuXV.;.Q N Q ,.' ` ( ( ( o.k.N.N.V.1XA.V.B.z.N.z.c.z.N.N.B.B.1XB.z.z.B.z.7.z.7.r.v.v.n.C.C.(.sXSXIXFXY -   O @ O O o O O : > > X             O     O X + o o     O @ @ + + o o o ",
"# , # # , # , # # @ O - S F u y w = o   X       + +   + X X X   . % = k 1.eXeX2.R M V ;.l m N N ^ o.2.z.l.N.N.N.V.V.B.V.z.z.N.z.B.z.z.V.N.N.V.z.N.B.m.h.>.g.z.m.M.N.c.r.c.c.n.c.'.rXLXGXT ; X @ X   X O O .   +     . . . % % 9 9 u D H U u   O O o @ # @ @ @ O ",
", # # # , , , # # @ O & bXSXVXSXJXmXnX8X2Xj.J v k e = % 0 & O   . k ,XtXA.[ N E R V V Z m Z z.z.g.2.g.g.w.z.N.Z.Z.B.B.N.z.z.N.N.z.z.z.Z.z.B.B.m.B.N.z.g.7.g.g.z.z.z.c.c.w.g.w.0.0.q.t.`.SXHXI 8 D       % = 9 u h D J L ,X2X4XuXvXMXjX'.0Xv . O O o o # # o + o ",
"# # , # , # , # # #   . 4X^.q.) ..N.B._.tXaXMXMXNXVXLXeXj.k O O x HXyXi.E N ` _ ^ ' N Q Q ..,.g.k.w.w.w.7.l.c.B.B.N.N.z.z.z.z.B.j.g.m.N.B.z.B.N.N.c.c.{ ,.z.r.7.z.r.r.z.w.w.7. .0.w.&.u.i.wX0XqX4Xo O & 5XvXbXvXNXvXrXrXeXm.,.Z W *.u.*X_.e + X   O + @ @ # @ + ",
", # , # # # , # # o X   5.wXQ.2.,.{ ' m { N ^ E / 3.i./.b.n     9 rX9.-.~ M _ ^ ^ E N N _ X.o.w.g.z.g.7.g.z.c.B.N.c.c.7.g.z.c.c.Z.B.B.c.B.z.c.B.z.B.z.g.j.c.z.z.c.l.z.k.g.w.7.7.w.0.| %.y.i.[.*X,X. O g LX_.v.{ ' ^ N ` M Z m l ~ $.K. Xn.* O . o O # + # # # @ ",
"# , , , , , & # # +     J kX/.b.o.{ ' Z M M M l E $.O.F.p.H .   $ eXF.#.~ ~ [ ` ^ ^ E E ] | 7.w.r.r.r.0.0.c.N.V.V.M.V.M.c.x.N.n.V.V.3XB.Z.c.B.V.V.n.c.r.r.v.r.n.c.v.r.l.l.k.w.r.r.r.&.@.#.U.gX+X:.  O T NXu.@.N N Q N Q M M l l ~ O.`. Xc.. :   + @ @ + # @ # # ",
"- , - , 2 , , # # o X   u kXU.b.w...' ;.V B z V R $.O.#.y.,.= O . ,X~.4.-.W E E _ _ E ^ / %.l.M.A.V.A._.`.0XrXpXsXqXqXpXpXqXqXaXpXvXaXjXyXwXwXyXaXjXtXtXyXyXpXpXwX'.J.d.v.r.g.r.7.7.w.p.U.).kXpXv     6XqX) $.! ! N N Z m Z l R ~ W `./.:.  O     + O # # # # O ",
", , , , - , , , # o +   ; sXQ.J.t.} ^ ' ! l V V ;.$.#.#.i.w.w   + L `.4.-.W ^ E [ Q R E / x.A.VXVXVXSXMXMXCXSXSXSXSXSXSXSXCXSXCXSXDXSXSXSXSXSXDXDXDXZXCXCXSXKXLXvXA.qXp.e.r.r.7.7.e.0.b./. XgXqXe O & GXb.O./ [ Z M M m V Q l ! ~ $.`./.H .     + # # # # # # # ",
", , , 3 , 3 , - # # @   # rX[.^.v._ E ' V l z z V $.+.+.F.l.h   O x wXF.#.O./ Q R V ' ] / ) k.C 1.3XqXwXiXiXwXwXwXiXyXyXwXyXyXwXiXdXaXdXwXpXpXpXaXpXpXpXsXeX,XD k uXNXk.o.w.r.r.0.7.t.Q.U.*XkX3X% O t KXy.%./ N M M M M ! Q m ! ~ -. X^.v .   X + # # # # # # # ",
", , , , 3 , , & # # @ @ @ 2XdX^.v.] ^ N m z z l M ~ y.S.F.%.C   O e tXF.4.O./ ^ Q N ] ] O.) eXmXJ = k L L 1.>.1.1.P 1.L L L L L L P L U U L L L G L L L D 0 o F uXmXc.7. .7.r.7.w.w.0.J.).-XpXj.+ + F LXq.O._ ^ _ ^ <.Q A M m R W ~.dX`.e     + > # # # # # # # ",
", , , 3 , 3 3 - , , @ O O U gX`.Q.| 2.3.] M z l M ] y.D.K.~.<.$ : % M.F.S.#.#.) ] N }  .e.p.n.yXSX5X$     . .   .                                       . ; <XmXsXr.r. .| w.0.7.=.7. .f.pXkXpXA + O 5.NX8./ ] / / ] } { X.l V R W /.dXA.=     + # @ # # # # # # ",
", , , , , 3 , 3 , - @ +   x xX^.J.| *.b.&.~ ! ! ] ~ %.J././.k.8 X k ~.Y.L.H.J.y.e./ $.0.&.b.Q.U.`.SXGXu X @ O                     X . X             O   x 9XVX3Xc.r.r.w.X...7.&.=.) v.iXcXgXsXh O   9XtXG.| E ^ ^ =.0XbX:.:.R ! O.`.@Xh.. O . + # # # # # # > # ",
", , 3 3 , 3 3 3 , , # @   9 kX^.!.2.&.t.b.x.$.$.[ $.W i.Y.|.k.u o T iXR.R.|.Y./.~.%.q.0.q.u.q.d.I.].MXJXI X           O   X X @ + @ @ + O           o J nXNXA.c.c.r.w. .] }  . .w.b.dXZXdXpX1.$ @ * JXC.p.) ^ ( ,.pXMXI uXN.Q W i.=X`.>..     + # # # # , # , # ",
", - 3 , 3 3 , 3 3 & # @ X + aXQ.y.%./ x.x.`.F.y.%.$.E $.i.`.:.9   ; >.aX[.|.%X|.Y.U.s.y.&.&. .) y.U./.dXDX6X-   O O O   X + @ & # # o   O O O   X ; <XvX'.B.V.c.c.r.0.w.} ) ) 0.C.kXlXsXrXG % + O y KXa.w./ 8.A.MXdX1X0 JXw./ / J.dXwXn .   . + @ # , , # # , # ",
"3 , 3 3 3 3 3 3 , 3 & @ X . 3XQ.$.E R 2.) *.!.!.-.~.-./ O.-.;.&     o n eXpXOX&X;XT.U.J.t.%.$.| =.i././.{.SXGXx . @ X O   X # # & # o X O O O o S uXnXc.l.c.n.l.r.&. . .) ) a.{.cXsXsXZ.h + > % = U vX0.) l.pXZXdX].v x KX*.W / H.fX_.e     % > # & # , , , # # ",
", 3 3 , 3 3 3 3 3 3 # #   O 1.!.~ l l 3.u.Q n M.!.G./.%.R R eX8Xt     . e 1XsX@X%XhX).).^.i.| ) X.=.e.^.(.[.jXKXI X       + # # & # * #     * I nXvX..k.w.k.l.l.r.7.) / / v.sXZXsXsXj.8 . O + 9 L vXr.) t.sXCXiXrXG X T MXl./ / ^.dXn.= O X . > @ * , , , # , # ",
", 3 3 3 3 3 4 3 3 2 , # X > B _.R V ;.*.d.1.% w ,.`././.3.~ W _.nXD $     = L wX@X=X>X$XT.H.q.*.&.} } l.p.H.D.OXDX7Xq O O O # # # # @ O @ t 6XVXrXz.` 0.0.k.w.t.t. .) ) n.MXMXpXqXG $ : . $ x 4XwX) ) _.lXsXpXZ.k O   5XtX/ / i. X=Xk.o O   . < * * , , , # # # ",
"3 3 3 3 3 3 6 3 5 3 , # X + y wX[ ~ $.#./.n : . 8 L _.T.L.F.O.W 2.NX<X2 X   X b 0X@XOX#X$XY.I.9.8.$.X.k.l.n.U.Y.).CXnXS X O # > + o + X S uXSXA.N.k.` w.t.l.r.r.r.7.) A.SXgXpXZ.u +   O ; :.uX3X .r.{.BXsXpXj.8 O : o nXN.E @.^.hX{.L . O O + , , , , , , , , , ",
"3 3 3 3 3 4 5 3 3 2 2 # . + 8 tX3./ / y.~.k o @   $ B A.`././.+.E | NXuXt X @ O w m.pXOX=X&X.XI.Q.@.&.w.w.l.b.Q.^.(.jXKXT @   X X   % T GXNXZ.N.N.z.o.k.r.t.w.r.8.v.tXcX@XsX1.8     $ e 2XnXl.) v.jXlXpXqXA $ X + o h nX( ! @.[.-X].b . O O @ & - , , , , , , , ",
"3 3 3 3 3 6 3 5 5 3 2 - # : . eXx./ ^ O.~.BXT ; O O . e M.`././.!.O.| _.VXJ # @ X * P rX@XXX;X|./.I.Q.v.t.l.c.N.C.I.Y.@XDX9Xt O   w ,XmXA.Z.n.V.V.z.w.l.0.7.0.v._.BXkXpXqXF .     $ F rXtXw.( C.MXBXwXA.v X O X = H tX3XQ ~ *.(.fX_.e . X @ # , , , , - , , * , ",
"< 3 3 3 3 4 5 3 5 3 3 , # :   ,X^.y.) / -.H.xX6X4   O + 8 L `.).}./.@.O.d.MX<X-     $ v A.pX*X;X$X|./.I.n.x.k.N.l.d.J.H.U.MXGXF S 8XNXB.c.n.B.A.B.z.l.t.0.0.v.{.BXkXpX4Xu . X : = L vX0X .q.^.lXpXpX,Xw . O O w ,XvX!.~ V V / /.-X_.8   X + # , , , , 2 , , # , ",
"3 3 3 3 3 6 3 6 5 5 3 , , : O U  Xi.%.W p.E.XXgXnXv .   . % C 0X).P./.s.@.t.sXbXg : O . 0 j.@XOX$XzX#XY.I.n.v.l.e.w.y.p.u.r.eXKXJXvXM.w.N.V.c.N.M.o.l.t.t.C.jXCXiXpX1.; . . . u 2XvXn.8.b.dXlXtXrXA $ + O o x eXrXN.l.R z ~ y.*XdXV.$   O # - , , 3 2 , , , , , ",
"3 3 3 3 5 5 5 5 5 5 2 2 - @ @ v dXd.F.| p.I..X-X-XSXU *   O   h c.'.[.|.).*.8.[.VXI @ @ @ $ C tX@X=X;X#XY.).U.p.w.| 2.&.w.&.w.l.c.l.o.w.V.V.c.c.c.o.e.e.'.CXkXaXqXn % O O % G rXtX| 0._.lX@XwX3Xv o   X & U rXqXrXmXj.Z.] O.d.fXyX,.. + @ # # , , 3 , 3 , 3 - , ",
"3 3 3 3 3 5 5 5 5 5 5 2 # # O w kXI.!.0.e.b.U.).*X*XxX6X; O     8 g.{.T.E.E.9.*.V.BX1X;   O o h 3XdX=X.X$XT./.s.*.&.=. .&.O.=.e.e.r.l.l.c.r.v.v.7.] v.'.cXsXpXZ.y . . . ; 5.NX0X! ^ _.gXU.n.>.8     + 4 ,XMXqXxXMXP 9X{. .&.H.fX[.A . X @ # & , 3 3 3 3 , , , # ",
"5 3 3 5 3 5 5 6 4 5 5 2 < o O & tXf.u.&.| ~.8.Q././.I.].nXS O X   $ C 0X).|.|.G.O.@.wXnXk + @   8 1.tX*XXX;XE.H.9.#.@.| | | &.w.7.w.k.l.t.l.l.t.) v.aXcXdXpX1.$ . + + e h.aXo...M.pXlX X_.L = . O . k rXMXqXCXsX1X; PX(.=.@.U.fX(.n   X @ # , , , 3 , , 3 3 , , ",
"3 3 3 5 5 5 5 6 6 5 5 2 < # + o 4X/.Q.e.k.^.8.e.^.`./.I.'.mXI X O O % u 1X[.). XY.#./ _.MXT # @ X $ G rX@XXX%X#XY.9.y.*.) &.*.x.t.k.l.M.M.V.k.t.^.gXkXsXqXD % O   = H uXtXe.a.qXSXjX@X0Xv % .   % I bXaXaXBXpXrXv y IXC.) 9.^.dX{.r X   # , , 3 3 3 3 3 , , , , ",
"3 5 5 5 5 5 6 6 6 5 6 3 2 # O o <X`.x.X.| Q.p.Z h n./.^.!.n.gX2X4 O     8 h.{.).|.}.y.@.f.kX4Xq : O @ r 1XiX#X&X$XP.Y.F.#.0.*.x.l.k.k.k.o.=.e.(.cX@XiXB.e + : + 9 ,XjXC.@.d.pXZXpXpXB.w .   O w ,XsXrXSXkXtXqXv O Y DXC.@.d. XgX0X9   @ # , , 3 3 3 3 3 3 , - , ",
"3 3 5 2 5 5 5 6 6 6 5 5 2 < @ X G yX0.^ | H.x.L o 8 ,.`./.H.Q.qXbXk   X O $ A qX XE.|.K.8.8.pXnXD X o X ; 1.pXOX;X&XE.H.G.) ) ] ] } } &.t.'.MXlXpXtX>.= X   o D uXjXa.8.n.sXlX@XqXP = O   . S 8XkXpXZXpXpX1Xr . : 5XNXM.q.J.-XgXB.%   @ # , , 3 3 3 3 , , 3 , , ",
"5 3 5 5 5 5 5 6 7 6 6 6 2 < @ @ y MXu.W [ F.~.u O : % b Q.H.y.3.M.MXP # :   . k 3X[.T.|./.@.) `.NX;.P 0 X % n rXiXOX$XT.U.H.s.t.l.x.t.b.{.CXkXaXeXn . : O X T NXjXf.d.].cXMXiX0Xn .   X . I bXpXsXSXiX{.>.9 . O & uXrXw.Q.).hXpXj.+   o # , 3 3 3 3 3 3 3 3 , , ",
"2 5 5 5 5 6 6 6 7 6 6 6 3 2 X X = MXJ.~ ~ O.~.F . + O O v M.[.~.3.J.sX,X; O O . 9 h.{.). X!.W W *.}.c.v O   X w B.iX#X#X$XT.Y.U.Q.d.C.jXcXsXaX1Xw     O O o IXiXd.n.dXZXsXiX1Xw   O   0 ,XNXsXBXMXpXeXG % X O + D CXv.t.^.*XzXpXC O @ @ , , , 3 3 3 3 3 3 , 3 3 ",
"3 3 5 5 5 6 5 6 7 7 7 6 2 3 # @ . rX~.$.R O.^.BX<X- O : . w .._.^.H.H.{.vXg +   . = A 4X:.F.O.~ +.}.`.C   & X X 8 U pXOX|.XXXXT.(.@XkXCXpXsXU ; O O o . : t IX).D.n.lXaXaXP ; X   . x 8XMXsXDXvX@XB.w @ O + ; 5.NX'. .t.(.-XcX{.h O O & & 3 3 3 3 3 3 3 3 3 3 , ",
"6 3 6 5 6 5 6 5 7 6 7 6 3 5 , @ . 2X`.%.W W u.^.xXuXy O   . $ C _.`.J.s.C.NXJ * :   o 8 % 3X3.~ O.}.~.L + S 5.* X X n 0XiX+X%X:XlXZXkXsXqXn o X   x 1.x : S LX_.9.(.cX+XC o @ + o I vXkXNXCX+XpX1.;   X o u 8XNXV.)  .b.I.-XkX'.w O @ # , 3 3 6 4 3 3 6 3 3 3 , ",
"3 6 5 6 6 6 7 7 7 7 7 6 5 5 * @ + I `.-.O.W y.s.T.gXKXI $ O O X h c.`.b.b.^.kX5X4 X   O + ,X$.$.O.K.G.,.% u KXrXy . . w ,XsXiXxXDXjXpXm.w . + = H aXtXD O T MXb.a.-XxXrXe + : 0 ,XkXjXBXkX@X3Xn o     o G bXvXk.o.} =.b.Y.zXjXA.= X # # , 3 3 3 3 3 5 3 3 3 3 , ",
"3 5 5 6 6 7 6 7 7 7 7 7 5 i * @ : x yXF.y.%./ 2.v.C.^.CX2X4 : : . w ,.0X).I.^.sXuXu X X . <.~.#.-.F.D.z.% 0 MXpXnXD X X $ L qXpXpXaXP ;   + 0 1.aXiXtXr   5XaXi.J.;XgX1X. % u B.aXaXSXjX{.B.w + O X w <XmXwX0.) } =.x.J.P.zXdXh.$ O @ , , 3 3 3 3 3 3 3 3 3 3 , ",
"6 6 6 6 5 7 7 7 q 7 7 7 7 i * @ + 0 `.-.#.$.E ! | %.@.y.kXbXu X + : % C _.wX!.Y.+XVXJ X . H _.-.4.4.G.V.9 $ vXJ.v.MX<XX o o v m.2Xn > > o u 4XkX).-XqX8   9XiX9.I.hXsXk % F rXpXkXBX{._.G ;   . % v uXVXZ.t.8.) ] =.a.f.OXcXiXL . O @ # 3 3 5 6 6 3 3 3 3 3 3 3 ",
"5 3 6 6 5 7 7 7 7 7 p 7 7 5 2 * + r `./.S.9.O.[ E W ~ -.9.).lXP $ O . % v 1X`.Y.T.OXCX1X9 x tX-.4.4.F._.h . 4X^.@.d.kX8Xt @ . $ . . > % H tXiXK.T.dX3X$ @ GX].i.J.@Xh.8 j.bXjXMXMXtXA.b o O O = U vXvXA.a.t.k.&.w.e.d.(.lXcX(.n . O # , 3 3 3 6 6 6 3 3 3 3 3 , ",
"6 3 6 6 7 7 7 7 7 s p 7 7 6 5 * ; ,XyXY.}.K.i.%.~ R W %.9.F.U.lX4Xq   O + 8 ,.`.Y.T.|.-XbXG jX+.S.#.~.!.n . 5.~.i.F.d.gXvXS + : .   0 j.aXY.D.L.|.=X2X. ; KXY.Q.p.[.G 6XMXkXZXjXpXB.e     . t 6XSXwXa.a.t.e.w.=.l.v.].cXlXwX'.w O : & & 3 3 3 5 4 3 3 3 3 3 3 3 ",
"6 6 6 6 5 7 7 7 7 7 p 7 7 6 5 2 + k 3X{.H.E.Y.F.O.W ~ / *.y.F.d.=XNXS @ O @ % C _.).T.OX=XcXjX+.4.4.K.!.L . J [.K.G.i.Y. XCX5.& % k 3XyXq.9.K.L.$X*X>.X y IXP.H.!.'.AXsXCXCXpXqXL %   O o D bXMXZ.t.t.0.v.x.=.r.a.{.CXkX[.1Xv . O # & , 3 5 6 5 5 5 4 3 3 3 3 3 ",
"6 5 6 6 6 7 7 7 p 7 p p 7 7 6 2 * * e h.U.Y./.L.+.O.$.$./ p.F.G.G.{.LX<Xo .   . k n./.T.XXE.G.+.+.#.K.^.1.. x  XL.K.u.D.H./.BX8X1.uXwX-.9.S.L.R.#X[.P   F LX#X}.Q.C.pXZXkXiX3Xk $   O = T NXjXv. .l.&.t.u.7. .a.pXZXpX{.m.8 .   # > , 2 3 5 5 5 5 5 5 3 3 3 3 3 ",
"3 6 6 6 6 7 7 7 7 q 7 q q p i 5 , @ # = A _.`.F.K.4.4.-.*.%.*.y.D.I.@XZX8Xw X   . 9 ,.`.T.E.}.F.O.+.K.!.1X$ 0 fXD.K.9.9.F.#.u.[.jX~.-.#.9.K.R.W.$X@Xn   T LX$X/.^.gXZXsXrXh.e X O   y 2XNX_.a.t.q.w.&.p.8.8.b.jXlX].qXL = O + # # < 3 3 5 5 5 5 5 5 5 3 3 3 3 3 ",
"6 6 6 6 7 7 7 7 p p p p p 7 7 6 5 < @ + % b V.[.K.L.P.K.J.u.l.e.8.D.Y.T.dXVXF o     = G A.~.~.F.#.W S.U.3X= = jXS.R.S.9.#.4.9.@.@.9.9.9.F.K.W.XXfXwXu   6XBX*X/.*XhXpXeXG $ X O + G vXjXp.8.p.y.x.3.x.p.@.C.jXlX[._.B . O O O @ # 2 5 5 5 5 6 5 5 5 3 3 3 3 3 2 ",
"6 6 6 6 7 7 7 7 p s q p q p s 7 5 3 , @ + . h N.`./.|.XXP.I.Q.t.i.i.G.K.P.=XCX<X$ .     y w 1.`.#.O.F.L._.w % tXL.R.L.S.i.9.i.%.%.9.9.S.S.L.W.#X-XqX9 O FXlX).I.-X-X3Xh $ O O ; j.MXwX8.q.i.p.e.x.l.q.v.(.kXdX+XB.k . O O   o * - 2 i 6 6 6 6 6 5 5 5 5 5 3 5 3 ",
"6 6 7 6 6 7 7 7 p 7 p s p p s 7 4 3 , #   O . 8 <.qX[.#X&X).).I.s.*.*.F.H.Y.P.hXuXy X   O + J yX#.#.S.R._.u   1X}.L.R.S.i.i.9.9.-.F.9.G.I.W.W.;X-X3X= * PXgX/.T.>X-XB.$   $ u 3XMXn.&.) p.%.0.x.p.u.^.dXZXpX0Xj.9 + O       + & 3 3 6 7 6 7 7 6 6 5 6 3 3 3 3 3 ",
"6 6 6 6 7 7 7 p p p p p s s s 7 7 4 3 # O     O % A _.T.#X:XXXT.^.b.q.@.i.S.K.P.fXSXI . : : x jXS.H.S.}.^.G . 1.}.R.R.S.F.G.D.9.G.F.G.G.Y.W.oX;X=XB.% s KXdXU.OXzX+XJ o & G vXgXC.p. .&.%.| &.v.v._.MXcX]._.A %       . . X & 1 1 5 4 6 7 6 6 6 5 6 6 5 3 4 3 3 ",
"6 6 7 7 7 7 7 p s p s s s s s s a 4 1 *   7 .   O . n '.[.*X;X%X#X).Q.s.#.@.#.S.S.L.CX2X; : y jXK.P.P.|./.1.. H  XR.W.K.D.D.D.G.G.G.d.D.Y.W.oX;X@Xg.: c DX@X/.E.zXZ.8 9 1.jXqXn.p.p.@.q.%.x.x.d.{.SXkX].V.h   X X 4 j D + @ # 3 4 6 7 7 7 6 7 6 5 5 5 3 6 3 3 3 ",
"6 6 7 7 7 p 7 7 p p p s s d s s p 7 3 o   6.5.=   . . y Z.].*XhX;XXX).^.i.#.+.+.4.F.a.pXvXc ; DXH.W.P.|./.1.& v fXR.W.L.K.H.G.D.H.J.G.K.P.oX&X;X+XG : K AX).I.).kXn u 8XMX`.t.b.v.p.O.*.y.i.d.dXZX=X].N.e   X X y uXA.>.. # , 3 4 6 7 7 7 6 6 6 6 5 5 4 3 5 3 3 ",
"6 6 7 7 7 7 s p p p p s s d d s p 6 1 o o <XHX8X0 .   . 9 1.[.].%X>X#X.XU.d.i.+.+.+.#.y.wXJXT BXY.$XW.}.Y.B.; e kXR.W.R.D.D.D.H.H.d.d.I.E.oX&X:XpXb O <XMX).P.I.qXP NXpXa.u.@.i.p.@.*.0.p.^.dXlXpX(.1.9 . O   D uXxX).{ + # , , 5 7 7 7 7 6 7 6 5 5 4 3 5 3 3 3 ",
"6 6 7 6 7 7 7 s p p s s d d d s p 7 3 * X U A.V.nXx   X . % A '.(.-X>X>X:X-X.XH.#.#.#.i.i.^.zXgXY.|.oX|.Y.A.9 = vXR.W.W.D.D.D.d.d.f.D.P.#X&X&X:XtXr O 9XkX#XT.d.pXZX+Xf.u.D.8.a.d.u.(.OXpXBXZX{.'.P $   . = H aXxX>X(.A O # , 3 5 7 7 7 7 7 6 5 6 6 6 6 5 3 5 3 ",
"6 7 7 7 7 7 p p s s p s d d d s s i 3 , + J A.M 2.MXU , O . $ v c.(.OXpX-X:XzXzX-X*X#XT.|.P.f.D.G.T.|.R.E.^.r . tXP.W.W.P.H.G.G.f.D.f.f.XX&X&X-XqX8   nXxX%X).I.a.f.I.).[.*X=XhXhXgXcXMXkXgX{.4Xn + X X w 2XBXOX#X>X`.H X # , 3 5 7 7 7 7 7 7 6 6 6 6 3 5 3 3 3 ",
"7 7 7 6 7 s 7 7 p s s s d d d s p 6 3 , + J 0XR R u.lX7X;     . r z.0XqX[.(.).]. X=X-X>XzXzX:X;XOXE.T.P.#XC.v . 3XoXoXW.P.D.d.d.f.f.f.T.XX&X>X:X3X$ * PXxX:XgXdXgXxXcXZXxXhXgXpXiX[.=XyXtXqXB.e .   . D rXgX^.Y.XX&X_.n   @ # 3 5 7 7 7 7 7 6 7 7 6 4 5 5 4 6 3 ",
"6 7 7 7 7 p s p s s s s d d d d p 6 3 & O F jX@.W O.Q.cXnXu = 0   o = r B >.h.3X_.{.].].(.].@XgXhXhXfXhXhX_.n   ,X-XoXoXR.D.f.I.I.f.(.T.&X&X:X+XB.o 0 KXAXAXcXcXgXdXiX].(.(.iX'.3Xm.>.b r = .   X - >.MXgXd.^.T.XX&XI.n   # & 4 4 7 7 7 7 7 6 5 7 5 6 5 3 6 3 3 ",
"6 6 7 7 7 7 7 p s p s s d d d s p 7 3 & O S cXd.-.W F.T.dXaXm.5.  O         . = e k H >.1X3XqXiXwX'.].@XgXwX:.. I zXoXoXT.I.f.I.f.^.^..X&X>X:X.XU ; G jXdX+X{.{.qXqX3XB.>.G v w = o . X     . O X T cXhX(.v.U.Y.XX%X(.j O @ < 3 5 7 7 7 7 7 7 7 5 7 4 5 6 3 3 3 ",
"7 6 7 7 7 p 7 7 p p s s d d d d s 6 5 & O y AX/.F.W 4.P.P.&X@Xj.X O     O O O   O O   X $ ; e v P h.3XqXaXrXb   x AX&X&XE.I.I.I.f.I.(..X>X>X>X+XA y 8XtXqXZ.h.A b e = o .     O                   <X-XOXU.s.^.}.oXXXQ.h   @ , 3 5 7 7 7 7 7 7 7 5 7 4 5 6 3 3 6 ",
"6 7 7 7 7 s s s s s s s d d d d s p 5 & + 0 AX).F.@.#.K.P.&XT.g.. O                 O O           . . 8 e w $ O u AX>X&XT.U.I.I.I.(.(.#X>X>X>X@Xn . t r = $ O O               X     X     O       <X;X|.Y.s.J.|.&X.X^.r   # < 3 5 7 7 p 7 7 6 7 6 5 6 6 6 6 3 3 ",
"7 7 7 7 7 7 p s d d d d d d d d s i 6 * @ ; AX/.I.8.*.Y.E.%X(.L   O     X O   X X X     O O O O O       O     O f AXzX;XOX(.(.f.(.(.(.%X>X>X>X+Xn @       O O O O           O : : > : . X O O     <XxX/.H.Q.Q.|.%XXX_.e X @ , 5 5 7 s 7 7 7 7 7 7 7 4 6 6 5 3 4 ",
"6 7 7 7 7 7 p s d d d d d d f d s p 6 * @ 0 LXI.D.q.y./.E.:Xc.k   O     : : + > # @ O O O                     O f LXzX>XOX(.(.C.(.(.].%X>X>XzXgXk                     O O   X + + : + + +   O     5.gXs.i.b.K.P.oX%XC.w @ @ 2 5 5 7 p 7 7 7 7 7 7 6 6 6 6 4 3 3 ",
"7 6 7 7 7 p 7 s a a d d d d d d s 7 5 , @ ; SXI.D.8.i.Y.T.#XC o O O     X @ @ @ @ @ + #   O               . 0   t LXhXhX+X'.'.'.'.(.(.%X>X>XxXpXy & <               O   O X O @ @ X @ +   O     ; 8XOXa.e.b.Q.P.&XXXn.w @ # 2 5 7 7 7 p s 7 7 7 6 6 6 6 6 6 6 3 ",
"7 6 7 7 7 7 p p a a d d d d d d p p 5 3 X * mXT.H.9.u.Q.T.E.cX1.o O     O X @ @ : @ @ o   O O       . = G ,X,X$ q KX:XzX@X_.'.qX'.(.(.%X>X:XzX{.w t GXY . O     O O O     @ : # X X X @ O O . y 1XMXn.0.v.b.G.Y.%XT.n.; X # 2 5 7 7 p 7 7 7 7 7 7 6 6 6 5 3 6 3 ",
"7 6 7 7 7 s p p a s d d d d d d s p 5 2 o o GX).Y.i.8.i.I.P.OXcX4Xw : :   X X + @ o > # X X O :   - J uXMX+XZ.$ 4 mX-X>X=XqX'.'.'.(.(.%X;X>X:XiXw t IXIXGXF - O O X     +   @ @ o @ @ X O $ n aXpXr.t.&.x.i.H.).%XT.c.$ + # , 4 5 7 p 7 7 7 7 7 6 6 4 5 5 5 3 3 ",
"7 7 7 7 7 7 p p d d s d d f d d s 7 5 1 o o nX[.U.u.&.&.q.H.T..X:XbXS X     . + # . O X     . % k 4XDXZX-XOXA.= ; SX-X;X=X'._.'.'.(.].$X>X:XgXwX0 t KX+XvXIX9XS .     O X O @ X X : : . - 1.vXpX8.t.e.X.k./ H.Y.#X#XM.o o # 3 6 7 q p p p 7 7 7 7 7 7 5 5 3 3 5 ",
"6 7 7 7 7 7 p s s s s d d d d d s 7 6 3 # X uX XU.J.&.| / y.H.}..X&XCXT X O : O O   X O X = v 1XjXgX%X%X;X*XA.; ; VX>X;X@X(._.C._.'.+X-X>X:XhXpX; q KX'.(.iXAXLX9Xu O O O : O X X + . w 4XMX_.t.8.w.X.X.Q O.F.S.#X#Xz.o O # 3 6 7 7 7 q 7 7 7 7 6 7 7 5 5 5 3 5 ",
"6 7 7 7 7 i p i s s s d d d d d s p 7 1 @ X 7XiXH.H.*.X.] | e.b.T..XOXCX5X4 o       O % D 3XMX@Xd.J.#X.X&X).n.$ - NX%X$X.X^.C.C.C.'.+X;XhX:XgXwX= q PXiX XT.OX-XZXLX5Xg @ O     @ @ D vXMXa.8.e.X.=.X.,.M $.i.9.OX*X,.+ # , 3 3 7 7 a 7 7 7 7 7 7 6 4 5 6 4 3 5 ",
"7 6 7 p 7 s 7 p s p d d d d d d d s 6 1 # @ 6XiXH.H.e.o.] X...| d.^./.|.cXrXh D .   t 2XBXhXf.@.t.s.|.oX&XT.t.= * mX%X;X#X`.(.(._.'.wXhXhX:XgXwX= 0 PXdX$X)./.).#X;XcXIX,Xe v . : I VXcX_.e.@.&.2.k._ V R %.i.K.=X).<.@ @ # 3 6 7 7 7 p 7 7 7 7 7 6 7 5 5 5 5 5 ",
"7 6 7 7 7 7 p s p s s d d d d d s p 6 1 # @ 5XpXU.i.@.[ _ ^ ^ / w.p.U.}.XX>X+X1X= . U ZX=XU.F.e.i.D.E.W.#XY.l.$ * mX-XhX=X/.^.^._.'.'.hX;XgXdXqX; 4 KX#X&X).!.H.Y.|.XX$X-X'.B.= % PXkX Xd.p.k.../ k.! M ;.$.O.L.dX X>.  @ , 3 5 7 7 a 7 7 7 7 7 7 6 6 6 5 5 < 5 ",
"6 6 7 7 7 7 7 p p s d d d d d d s p i 3 # X <XjXH.@./ E M ! [ [ ]  .b.|.XX;XOX!.* X I cXE./.y.p.t.J.}.E.#X|.V.$ ; JXgXhX*X^._._.C.'.{.hX;XxXdXqXo ; VX#X$X|.Q.f.^.}.XXW.|.).V.o O PX@X).J.r.| ` X.k.R [ ~ R @.K.=X].L X @ , 3 4 q a 7 p 7 7 7 7 6 6 6 5 5 3 5 < ",
"7 6 7 7 p 7 p p p p d d d d d d s s 7 3 # @ T MXd.y.$.[ M ;.[ { ^ } b./.E.>X).n.; O I lXE.K.9.q.i.G.E.R.XXT.A.= * GXzX-X*X^.^._.A.'.+XfX;XhXgX0X$ q SX*X$X).b.v.b.K.E.P.W.|.V.$   PX[.).^.0.} ] $...M [ M z -.K.#X@XA + o # 4 6 7 7 p p 7 7 7 7 6 7 6 5 5 4 3 4 ",
"7 7 7 7 7 p p p p s d d d d d f d p p 3 , @ I NXG.u.) [ E Q E { ^ ^ t./.).>XT.n.$   I lXP.H.*.q.x.s.E.P.XX|._.% & nXxXhX*X_._._._.(.'.fX;XzXfX0X$ 4 JX|.$X).n.n.b.i.E.E.E.|.M..   KX[. X^.l.=.] X.! Z ! j ~ -.H. X@XG + X - 3 7 q p p 7 7 7 p 7 4 7 7 5 5 1 3 4 ",
"6 7 7 7 7 7 p p p p p d d d d d d p 7 3 , @ K MXJ.i.) / [ N Q N ^ ^ e.U.).:X).n.=   I CXY.U.i.0.e.F.Y.R.|. XA.$ @ nXkXhX@X_._.!._._.[.=X;XzXgX0Xo q JX#XoX/.b.x.~.9.}.K.}.).V.$ O KX)./.^.x.g...{ Q Q ;.z $.-.U.fXiXn O @ - 3 6 7 a 7 a 7 7 7 7 7 7 5 5 4 3 3 3 ",
"6 7 7 7 7 p 7 p d a d d d d d d d p 6 3 < O Y LX(.s.=./ <.[ Z _ E ` r./. X-X|.C.;   J CXE./.y.0.e.s.T.E.*X*XA.% O FXlXhXdX'._.A.C.^.(.fX$X:XdXA.X 4 VX*XXXU.p.l.x.-.K.S.R.[.N..   KX^.Y.J.c.g.o._ Z ' z ;.%.i.).=X@Xv + @ , 3 6 p q q p p 7 7 7 6 7 7 5 5 5 3 5 ",
"7 6 7 7 7 7 p p d d d d d d d d d a p 3 < O S LX`.!.| E ' ' ! Q ' ` &.^.T.%X).C.;   J cXE.`.p.0.e.i./.E.$X=XZ.% O 9XkXhXdX_._.A.n.Q.`.$X$X-X@XV.X 4 KX*X#X/.q.l.%.4.4.S.L.).z.X   KXU.H.8.w.2.,._ ' _ V ~ *.G./.fXwXr > o , 5 6 7 7 a 7 7 7 7 7 6 6 4 5 5 4 3 3 ",
"6 6 7 7 7 p p s s s s s d d d d d d 7 3 < + g PX(.Q.) ` ^ Q Z ' ' { =.J.Y.OXT.a.;   I ZXT.^.p.0.e.y.U.|.-X=XZ.$   9XkX=XyX_.n.C.A.Q.^.$X#X-XOX1XX - JX%X#XI.v.p./ 4.F.4.L.}.,.%   KX^.U.b. .o.' { <.Q ' X.u.J.T.@XiXr O @ 2 3 7 7 7 7 p 7 7 6 7 5 5 5 5 5 4 3 3 ",
"7 7 6 7 7 7 p 7 s p s s s d d d d p 7 7 - @ f UX`.^.=.{ ' Q ^ Q ^ ' 2.F.I.|.}.C.=   I CX).Q.u.e.2.-.U.}.-XdXV.$   9XgX$X X_.A.n.!.n./.|.W.#X).m.X ; JXOX|.D.x.2.~ %.F.F.S.}.<.+ X KX^.^.p.=.o.' Q ;.<.2.o.d.^.).*XwXw X # , 5 5 7 p 7 7 7 7 7 6 5 7 5 5 5 5 5 3 ",
"7 7 7 7 7 s 7 p p s s s d d d d d d 7 7 & X f IX@X`.e.^ Q N N Q Q [ =.s.J.|.).n.=   I BX|.^.0.&.%.x./.).fX XV.$   9XgX=X).n.A.n.n.n.U.|.E.-X*Xm.X * JXOX|.D.x.=./ O.H.K.R./.<..   JXQ.G.q.| ..<.' R ..=. .v.U.=XhXwX8 @ # 2 3 7 7 7 7 7 7 7 7 7 4 6 6 5 5 5 3 3 ",
"6 6 7 7 7 7 p p p p p s d d d d d a 7 1 , @ 7 PXiX`.l.X.{ N Z A Q ' X.-.U.|.|.C.=   T MX).^.0. .X.p.U.).-X=X1X$   9XgX|.`.t.v.n.n.n.^.|.XX-X[.2.X - mX#X$XF.e.$.0.u.K.Y.}.).,.o   KX^.G.*.| [ <.V :.| ` &.p.I.#X*XC.= @ # 2 5 5 7 p 7 7 7 7 7 5 6 6 5 5 5 5 5 3 ",
"6 6 7 7 7 s s p p p s d d s d d d p 7 7 # @ # PXwX^.t.} ' :.;.N Z ! Q O.s.).).C.;   I MX/.^.t.&.X.0.U.T.*X*XB.$   7XdXT.^.0.e.M.v.b.^. X$XhXOX,.  * mX=X|.D.&.] q.s.Y.).|.[.g..   KX(.G.*.W V R z X.X.=.w.b.u.).)._.= @ # 2 5 5 7 q 7 p 7 7 7 7 5 7 6 5 3 5 < 3 ",
"6 7 7 7 7 7 7 p p s s d d d d d d p 7 7 - @ + JXyXu.&.( ..Z m Z :.Z [ %.J././.A.8 @ I CX(.Q.v.w.=.0.G.I. X*XV.$   7XgX|.Q.@.e.l.v.d.Q.|.#XhX=X1.  - JXOX}.D.| / e.i./.}.|.|.k..   KX`.H./ ! ;.z V ,...o.2.&./ T.@XA.= X # 3 5 i 7 p 7 p 7 7 7 5 7 4 5 5 5 5 4 3 ",
"7 6 7 7 7 p p p p p s s d d d d d p 7 7 - @ @ JX{.s.7.} { :.B B l l m O.G.U./.n.8   K CX(.Q.t.w.X.0.d.Y.|.*XV.o   6XiXP.J.&.w.w.k.t.^.|.|.-X=X>.  * mXOX/.S./ ~ e.F.Y.).*X/.g.. X LX/.H.@.M V j ;.h.o.o.E ] G.#X*XA.$ O # 2 5 7 p p 7 7 7 7 7 5 5 6 4 6 3 4 5 < ",
"6 6 7 7 7 p 7 s p p s s s d d d d a p 6 , X + GXiXa.@.^ A :.M Z B m ^ q.s.Y./.n.=   I MX/.b.w.,.o.t.J.I.*X XV.$ O 5XkX).H.*.| ] | ) b.).*X=X X:.  & mX X/.G.| %.e.i./.Y.|.Y.m.. X KX^.K.e.' j V ;.:.Q N X.F.d.=X=X3X$ . # 3 3 5 7 7 7 7 7 4 7 4 5 5 3 4 1 3 4 < ",
"6 6 6 7 6 7 7 p p p p s s s s d s s p 5 , * . 9XiXs.*.E M L N V V N ] v.J.)./._.9   I MX^.d.=.' ..w.J.U.|.[.N.. X <XgXT.K.8.&.*.w.) H.). X%X[.A O $ nX*XR.9.%.*.*.u.U.Y.}.Y.m.. o KX!.G.%.;.Z H l j ! h.e.J.U.$X=X1X$ X & < 5 7 7 p p 7 7 7 7 6 5 6 5 3 3 3 3 3 ",
"6 6 7 7 7 p 7 p p p p s s s d d s s p 5 2 X O 9XjXs.| N Z Z l l l Q X.b.Q.).Y.C.8   I MX^.n.2.{ ,.p.^.|.*X[.N.$ X 5.gX#XOX(.^.C.^.C.^.OX@X-X+XG   . nX)./.G.| ) 3.y.U.Y./.Y.h.. X SXi.y.[ M z j m ' 2.g.=.!.H.*X*X1XX X & < 3 7 7 7 7 7 7 6 6 6 6 5 6 3 3 5 6 3 ",
"6 6 6 7 7 7 p 7 p p s s s s s d s s 7 5 2 *   7XsXs.W M Z Z V V B Q | b.^.|./._.8   I MXI.Q.=.' { l.^.Y.*X=XB.. X U ZXAXcXZXZXAXAXZXZXDXAXZXaXG . X bX@X/.F./  .| @.K.D.Y.P.,.o X JXp.-.R M V V <...2.o.&.p.d.#X=X1.. o < 1 5 5 7 7 7 7 7 6 7 5 5 6 5 5 3 5 3 3 ",
"6 6 6 7 6 7 p 7 p i 7 s s s s s s s p 7 3 o X 6XjXs.W N m B l m m Z X.b.^. X/._.8   I MX^.b.} { } x.J.Y.*X=XB.% F rXsXpXgXpXsXjXpXgXpX=XpXaXtXv   @ bX@X/.@.| / %.@.G.9.Y.Y.g.. o VX) W R ;.:.:.' .... .0.i./.*X@X>.. @ < & 5 5 7 p 7 7 7 6 6 6 6 5 5 3 4 3 3 3 ",
"6 6 6 6 7 7 7 p i 7 p p s s s s d s 7 6 3 o O <XsXu./ M l z l V B Q ` p.Q.|./.C.8   I MX^.p.) ..] r.s.I.*X=XN.$ w j.j.,Xh.,Xm.m.1XB.B.N.B.j.L %     bX'.x.@.2.l.| %.i.S.Y.T.,.o o VXy.%.[ [ V ..` ` } =.) s.H.*X@XL . + & 3 5 6 7 7 a 4 7 5 7 6 5 6 5 5 5 3 3 3 ",
"5 5 6 6 6 7 7 7 7 p p s s s s s d s 7 7 3 # + T kXs.$.N l l l V m Z ] u.J././.C.8   I VXJ.a.} { } &.u.Y.fX{.C O @ X o     . o o X X . % o * . .   . uXv.@.*.k.=.X.$.y.K.K.K.A . * SX!.@.2.X.[ { } Q } o.&.a.F.=X@XG + + & , 5 6 7 7 p 7 7 7 6 6 5 6 5 4 5 3 3 3 ",
"6 6 6 6 7 7 7 7 p 7 7 p s s s d s s p 3 2 1 $ U [.J.%.~ M l z B V Z { @.J.U.)._.8   I jXu.y.^ _ | ) 9.I.dX:.% . .   . .     + O .   X $   .   .   * uXk.[ X.2.X.~ $.-.9.U./.<.. o SXd.i.*.o.{ X.` N ` ..} a.].lXaXG X : & 2 5 6 7 7 7 7 4 7 5 6 6 5 3 3 5 3 3 < ",
"6 6 6 6 7 7 7 7 p p p p p s s s s p p 7 2 , u j.dX).y.O.V V z z z H Z X.i.G.U.v.=   I jXd.&.[ ..] X.x.8.f.uX8X7X7X7X9X8X7X9X9X9X8X8X7X7X7X7X5X5X<XT mX,.;.~ Q Q M / y.G./.[.<.. $ SXq.Q.&.^ ' { } ^ V ' 8.^.kXgXtXv X # , 2 5 6 7 7 7 6 6 6 6 6 6 3 6 3 3 3 3 3 ",
"6 6 6 6 6 7 7 7 7 s 7 s p s s s s s p 6 2 * u 4X+X@X/.-./ R R V m Z ! %.8.K.U.n.9   I jXu.i.X.{ ] <.2.| @.0XrX'.qXqXqXrXaXvXvXvXvXvXaXtXsXaXsXvXrXuX<.j j z ! ' ~ ~ #.F./.[.:.. o SXJ.b.l.E ' ,.' M N ( _.kXgX+X1X=   @ < 3 5 6 7 7 7 7 7 5 5 5 5 5 4 2 5 3 3 2 ",
"5 6 6 6 6 7 7 7 p 7 p s p p s s s s s 6 5 , $ r B.wX).#XF.-.[ ~ Q N ^ / *.s.J.n.9   U aXi.*.' ,.( { ,...} | { ` { [ { <...k.g.X.r.{ ^ ] ..} A N A Q ! R ;.R ' ! M ~ @.S./. X>.  * MXI.s./ _ :.' ! [ } ^.cXgX{.j.9 + + o < 3 5 6 7 7 7 6 7 5 5 5 3 5 5 3 3 2 2 - ",
"5 6 6 6 6 7 7 7 p 7 q p p s s s s s q 7 5 3 , @ e 1XC.T.|.H.-.3._ V ;.~ *.i.H.n.8 O I aXy.$.' ,.o.g.{ ' [ :.:.[ ! ~ M M V ! Z _ ' Z N ....X...,.o.[ ! ! R V _ N m R *.9./. X>.. o SXJ.u.| N N { ` 7.0XBXpXpX1.8 + : : # 3 3 7 7 5 7 7 5 5 5 5 5 5 3 5 5 3 3 2 2 ",
"2 6 6 6 6 6 7 7 7 7 7 p 7 s s s s s p q 7 5 2 * @ w h.v.Y.).G.@.] M l E O.y.G.n.=   G yXi.%.:.<.,.,.` :.Z Z M j l z M z ! ..] =.=. .[ o.X.X.o.w.2.^ W ^ R E _ m m R -.#./.[.>.  * KXb.t.| N <.} 0.'.CXaXpX1.% O @ o , 2 3 5 6 7 7 7 7 7 7 5 5 5 3 5 5 3 3 3 2 2 ",
"2 6 6 6 6 6 7 7 7 7 s s p p s s s s q p p 6 2 2 > @ 9 ,.^.I.}.D.8.2.E / 3.F.H.c.=   G './ / R B Z N Z Q <.N.k.2.M.V.V.0X0XC.n.d._.C._.f.n.C.^._.^.d.e./ W W Q V R $.i.#./. XL   ; KXa.n.l.[ ` w.qXZXpXqXL $   O X * * 5 3 6 7 7 7 7 7 5 5 5 5 5 5 4 6 3 4 2 - , ",
"6 2 6 6 6 6 6 6 7 7 7 7 p p p p s s s p 7 q 7 2 , # o 8 1.A.U.E.G.*.[ [ 2.x.F.v.=   G qX-.X.<.:.' Q >.{ V.MXkXkXkXkXkXBXkXkXkXkXkXkXkXxXcXBXZXZXcXxXyXx.O.#.&..._ | F.9.Y.[.B   ; SX^.Q.X.^ ) qXBX=XqXG @   X @ # * 2 5 6 6 7 6 7 7 7 7 5 7 4 5 3 3 3 3 2 3 , , ",
"6 2 6 2 6 7 7 6 7 7 7 p i p p p s s s s p q 7 6 3 3 > # 8 L n.I.}.F.~ M M W q.n.8   J dXb.%.2.:.{ ' ' { tXpX`.{.].].(.].].wX{.wXwXwXwX{.wX[.{.wXwXtXQ A.9.H.b.| _ | b.i./.`.b   ; LXn.d...w.'.lX].qXC .     # # 2 2 3 6 6 6 7 7 5 5 7 5 7 4 5 5 5 3 3 3 3 3 3 , ",
"2 6 5 6 6 6 7 6 7 7 7 7 p 7 p p s s s s s p p 7 5 5 2 , o = L A.J./.F.' ! [ e.n.8   I {.$./ { ' ( { } l.dXwX2.G H G G G C G H L H U L >.1.1.>.1.1.U w ,.y.G.b.) ^ ] -.#./.U.A   8 LXf.8. .tXgX].eXn .   @ # > < 3 3 6 6 6 7 7 7 7 7 7 5 5 7 5 5 6 3 4 3 , 3 3 , ",
"6 2 6 6 5 5 6 6 6 6 p p 7 p p p 7 d p d s s s 7 4 4 2 2 2 @ o G A.H././ m E 3.V.9   I pX=.%.^ ' ..k.l.].dXwXh   .             .   .       X . . . . 8 D e.y.i.| ] W O.@.~./.H . ; LXv.p.{.kX(.A.k .     : > ; 3 5 5 7 7 7 7 7 6 6 6 6 6 6 3 6 3 3 3 3 3 3 3 , , ",
"2 6 5 6 5 6 6 6 6 6 6 q p 7 7 p p p p q q s s d p q 6 5 2 # # * D A._.| M ~ ~._.8   I qX$.%.` ;.o.v.`.=X+X3X=           X X     X . X o o o o X 0 * , r ,.u.Q.*._ Q W +.F.[.A   ; JX0.pXMX{.Z.r $   . X 1 3 ; 3 5 7 7 7 7 7 7 7 4 6 6 6 6 4 6 6 6 3 3 3 3 , , , ",
"2 5 5 2 5 6 6 6 6 6 7 7 s p 7 7 p p s s d d d 7 s p p i 3 3 - # $ n V.x.R $.F.b.8   I 0X~ %.[ !  .C.`.hX'.U . & J <X1X6X7X2X8X4X8XuXuXuX9XuXnX5XU w @ 8 :.p.d.q./ ! W W ~.`.A   0 rXqXgX+XB.r + . @ # , 3 3 7 7 7 7 7 7 7 7 7 6 7 6 6 3 6 5 5 3 3 3 3 3 3 3 3 - ",
"2 2 5 6 5 6 6 6 7 6 7 7 7 7 7 p 7 p p s p s d p p s i p 7 3 3 , # o v B.V.-. X_.w + I 0XW W N m ] 0.].=X'.u . c VXtXqX0XrXqXtXqXqX0XqXrXaXjXjX_.( h X = B n.s.p.^ ! ~ W ~.[.C . 9 eXpX(.B.w . O O @ < < 3 5 p 7 7 7 p 7 7 7 6 6 5 5 6 5 5 3 5 3 3 3 3 3 , , , , ",
"6 2 5 3 4 4 6 6 6 6 6 7 7 7 7 7 p p p s p d d s p d d p p 7 3 < 2 # o h 1X^.)._.8 . I wXO.2.' ;.&.Q.hX{.A.= X <XjX@.( ^ { ,.g.A ` ( } 7.e.b.J.`.r.A * $ h N.i.i.[ E R ~ F.[.A . r qX(.z.9   X X # < 2 5 5 6 7 7 p 7 7 7 7 7 q 5 6 5 6 3 6 3 3 5 3 3 3 3 3 3 , , ",
"2 5 3 6 5 6 6 6 6 6 6 7 6 7 7 7 7 p p s p s d d s d d p p p 4 4 3 2 # + y Z.'.2X=   I sX-.%.' ' O.^.gX].:.  @ nX^./ E ' { { { { ^ { } E &.8.J./.^.L 8 + 8 h.p.s.$.R R -.~. XL 0 <XtXg.8 . : X X < 2 5 5 7 7 7 7 7 p 7 7 5 7 5 7 5 6 6 6 3 6 4 3 3 3 3 3 , , , , ",
"5 3 6 3 5 5 5 4 6 3 6 6 6 7 7 7 7 p p p p d d d d d d d a a a 7 5 2 2 > + w n w     P sXi.2.N Q %.).gX_.h   t SXt./ ^ ` A ` >.,.` } o.] | q.s.U.`.o.k X = G n.Q.%.m ~ -.`.dXL + k v = O O : * * 3 6 6 6 p p 7 s 7 7 7 7 7 6 5 5 6 6 3 5 3 3 3 3 3 3 3 , 3 , , - ",
"2 3 3 3 2 5 5 6 6 6 6 6 7 7 7 7 7 7 7 p p p p p s p a a a a a a 4 4 2 # * X X     O I gXi.| M _ &. XiX3X=   T MX@.[ N ' ' ' ....{ ,.<.{ | *.Q.^.].w.C X ; h M.!.x.M [ i. XdXA +   + O X X o * 2 i 6 6 p 7 7 7 7 7 7 7 7 7 5 7 5 6 6 3 3 3 4 3 3 3 3 , 3 , , , , ",
"3 3 3 3 3 5 5 5 5 5 5 4 6 6 7 6 7 7 a 7 p p p p d s p d d a a a 7 7 4 - , < > X     G ^.$.E E Q *.dX].U   X uX'.@.[ M ' :.{ { { ,.o...{ ` ) n.^./.n.L 8 * 8 h.C.2./ =.C.gX@XA X   O @ @ @ - 5 5 7 p p 7 p 7 p 7 7 7 7 4 7 6 6 6 3 5 3 3 3 3 3 3 3 3 , 3 & , , , ",
"3 3 3 3 3 5 5 5 5 5 5 7 6 7 6 7 7 q 7 a p d d p p s d d d s q d s p 7 7 6 < * @   0 A ~.+.$.! R t.dX(.k   t JXn.| Q N N :.>.{ ..o.o.....{ ) b.^./.[.{ u X 8 H l.e.} n.jXkXwXn :   X # , 2 3 6 i 7 q 7 7 7 7 7 7 7 7 7 7 7 6 6 6 6 5 5 5 4 3 3 3 3 3 3 3 , , - , ",
"3 3 3 5 3 5 5 5 5 5 6 5 5 6 7 7 7 7 7 7 q p 7 d p d p p d d d s s s s 7 7 4 & & X g 1X~.@.3./ ^ n.dXn.8   J ZXe./ Z A Q ` ..^ <.>.{ ,.,.` } v.d.H.[.,.C . = k ~ u.w.aXgX@X1X; O : > 2 1 5 6 6 7 7 p 7 p 7 7 7 p 7 7 6 6 6 5 5 5 6 6 3 3 3 3 3 3 3 3 , , # , , , ",
"2 3 3 3 3 3 3 3 3 5 5 6 5 6 6 7 7 7 7 7 7 7 d 7 p p p s p p d d s s s p 7 4 6 < * o v B.n.U.y...aX{.>.X X 7XtX) E M ' N ^ { >.,.Q { h.{ :.2.V.b.J.(.V.:.9 < ; L n.wXMXiXm.8 o @ 2 , - 3 5 7 7 7 7 7 p 7 p 7 6 7 7 7 6 6 6 5 4 3 3 3 5 5 3 3 , 3 , 3 , , , , , # ",
"- 3 3 3 3 5 3 4 5 5 6 6 5 5 7 6 7 7 7 7 7 7 p p p d p p p d p d s d d d q 7 i 5 & & X k 3XC.8.z.jXwXk O * KXM./ E ! Q Q { { { { } 7.w.( >.,.o.t.f.^.qX:.y : & U qXdXiX1Xw + @ @ @ - - 7 6 7 q 7 p 7 s 7 7 7 6 7 7 5 6 6 6 3 6 6 3 3 3 3 3 3 3 3 , 3 2 , , , , # ",
", , 3 3 3 3 5 3 3 5 6 5 5 7 7 5 6 6 7 7 p q 7 p p p p p p s p d d d s d s s 7 7 5 < , . h B.A.iX@X3X=   D sXu.$./ X.2.z.l.r.a.r.r.7.c.r.Z.v.7.v._.^.wXg.G . 8 C =X).B.w + O # @ * 6 i 7 7 7 p p p 7 7 7 7 7 6 7 5 7 7 3 6 5 3 5 3 6 3 3 3 3 < 3 3 - 2 , & , , # ",
"3 , , 3 3 5 3 2 3 5 4 4 5 5 5 7 7 6 7 7 7 7 7 7 p p p p p p p d d s s d s s p i 6 1 < & X k 1X_.'.1.  o L iX@XiXdXjXjXgXgXjXjXdXpXjXkXMXMXvXaXMXMXCXMX'.,X$ e m. X2X9 X   @ * * 3 i i 7 p 7 p p q 7 7 7 6 7 7 6 6 6 7 3 5 5 4 3 3 3 3 3 3 3 , , , , , 2 , , , # ",
", 3 3 2 2 3 5 4 3 5 5 2 5 5 5 6 6 6 6 7 7 7 7 p i p p p p p p p d p d d s s p p 7 5 3 < , . h 1X,Xe . D eX{.].).].{.[.].'.iX{.[.{.{.pX].].(.@XiXiXpXpXpX4X$ 8 T 1.9 > X X X * 2 6 7 p p 7 s 7 7 p 7 7 7 7 7 7 7 3 7 3 7 5 5 5 3 3 6 3 3 3 3 , 3 3 , , , # # , # ",
"3 - - , 3 3 3 3 2 5 4 5 5 5 5 5 6 5 6 6 6 7 7 7 7 7 p p 7 7 p s p s a s d s s p 7 6 3 3 2 , . % % . . w :.{ >.,.,.g.>.h.h.g.g.g.g.g.g.h.h.g.h.m.h.B.z.z.k + O   X X X @ 1 , 3 5 7 6 6 p 7 p 7 7 p 7 7 6 7 7 5 5 6 5 6 5 3 5 5 3 3 3 3 , 3 2 , 3 , , , , # # , # ",
", , 3 , 3 3 3 3 5 2 2 3 3 5 3 4 7 7 6 6 6 6 6 7 7 7 7 p 7 s p s p p s s s s s s p 7 7 5 3 , & + + .     .     X .     X . . . X X . . . . .   . X X o X .   X X @ @ o # , 3 5 5 7 p 7 7 7 s 7 7 7 7 7 7 7 5 7 5 7 4 5 6 6 3 5 3 3 3 3 3 3 3 , , 3 , , , , # # # ",
", 3 , 3 , 3 3 , 3 4 5 3 5 5 5 5 5 5 6 6 7 6 6 7 7 7 7 7 7 7 p p p p p p s s s s p p 7 5 5 3 < , & # o @ + @ X X +     . . X + X + X . X   @ X         . X o + @ # # , 2 3 5 5 7 7 q p q 7 7 7 7 7 7 6 7 5 5 5 5 6 3 6 6 6 5 3 3 3 3 3 - , 2 , , - , , , # , # # ",
"3 , , , 3 , 3 3 5 3 3 3 4 3 5 5 5 5 5 5 6 7 7 7 7 7 7 7 7 p 7 p p p p p p s s p p p p p 7 6 4 3 , , , , & # # @ # # # > # # o # # # # # # # # # @ # # @ # # # , , - 2 5 5 7 7 7 7 p 7 p 7 7 q 6 6 7 6 6 7 5 5 5 6 6 3 3 3 3 3 5 3 3 3 , 3 , - , , & , # , # # # ",
"- 2 , , , , 3 3 - 5 2 5 3 6 5 5 5 5 5 5 5 7 5 6 7 7 7 7 s 7 p p p 7 p p p p 7 a s s p p 7 4 7 4 3 1 3 1 , , 3 3 < < < < < & & < - , 3 , < < < 3 < 1 < 1 > < < 3 2 3 6 7 7 7 7 7 p p 7 7 7 6 7 7 6 7 6 6 5 5 7 5 3 6 3 5 3 3 3 3 3 3 , , , , , , , # # , # # # # ",
"# , , , , 3 , 3 3 3 3 3 3 3 3 3 5 5 5 5 5 5 6 7 7 6 7 7 7 7 p 7 p p p p 7 p d d s p a p a 7 7 7 7 6 6 6 6 6 5 5 5 5 5 5 3 5 3 5 3 3 6 3 3 5 3 1 5 3 3 3 6 3 5 5 5 5 6 4 7 q p p 7 7 p 7 7 7 6 7 7 6 6 6 5 5 5 3 6 3 3 4 4 3 3 3 3 , 3 , , , , , , , , # # # # # ",
", # , , , , 3 3 3 2 3 3 3 3 5 3 3 5 5 5 5 5 6 6 6 6 7 7 7 7 7 7 7 p p p p s d 7 p p 7 s 7 a p 7 7 p 7 7 7 7 7 7 7 5 7 7 p 7 6 6 6 6 6 6 4 7 4 6 6 6 7 4 6 6 6 7 7 7 7 7 7 7 7 7 7 7 7 7 6 6 6 6 5 5 5 5 5 5 5 5 3 6 3 3 3 3 , 3 3 , , - # , , , # # , , # # , @ ",
"# , & 3 , - 3 , 3 3 3 3 3 3 3 3 3 3 5 3 5 5 5 6 6 6 6 6 7 6 6 p p 7 7 7 7 p 7 p s p p p p p p p 7 p a 7 a p 7 7 7 7 7 7 7 7 7 p 7 7 p 4 7 7 7 7 7 7 7 4 7 7 7 7 p p 7 p 7 7 p 7 7 7 7 7 7 6 6 6 6 5 5 5 5 5 5 3 6 3 3 3 3 , 3 , 3 , , , , , , # # , # # # # # # "
};