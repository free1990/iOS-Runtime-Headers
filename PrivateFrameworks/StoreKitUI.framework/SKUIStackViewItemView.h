/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, UIImage;

@interface SKUIStackViewItemView : UIView {
    UIColor *_borderColor;
    UIImage *_image;
    BOOL _shouldFlipImageHorizontal;
    BOOL _shouldFlipImageVertical;
}

@property(copy) UIColor * borderColor;
@property(retain) UIImage * image;
@property BOOL shouldFlipImageHorizontal;
@property BOOL shouldFlipImageVertical;

- (void).cxx_destruct;
- (id)borderColor;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (void)setBorderColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setShouldFlipImageHorizontal:(BOOL)arg1;
- (void)setShouldFlipImageVertical:(BOOL)arg1;
- (BOOL)shouldFlipImageHorizontal;
- (BOOL)shouldFlipImageVertical;

@end
