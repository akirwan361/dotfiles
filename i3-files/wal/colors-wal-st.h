const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#141312", /* black   */
  [1] = "#8D402A", /* red     */
  [2] = "#935236", /* green   */
  [3] = "#9F6D53", /* yellow  */
  [4] = "#B8845A", /* blue    */
  [5] = "#B5896F", /* magenta */
  [6] = "#C69676", /* cyan    */
  [7] = "#decabe", /* white   */

  /* 8 bright colors */
  [8]  = "#9b8d85",  /* black   */
  [9]  = "#8D402A",  /* red     */
  [10] = "#935236", /* green   */
  [11] = "#9F6D53", /* yellow  */
  [12] = "#B8845A", /* blue    */
  [13] = "#B5896F", /* magenta */
  [14] = "#C69676", /* cyan    */
  [15] = "#decabe", /* white   */

  /* special colors */
  [256] = "#141312", /* background */
  [257] = "#decabe", /* foreground */
  [258] = "#decabe",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
