@interface FBMWindow : NSWindow <NSWindowDelegate>

@property (nonatomic) CGFloat titlebarHeight;

- (instancetype)initWithTitlebarHeight:(CGFloat)titlebarHeight;

- (void)setMainView:(NSView*)mainView;

- (void)showTitlebarAnimate:(BOOL)animate;
- (void)hideTitlebarAnimate:(BOOL)animate;

- (void)updateWindowTitlebar;

@end
