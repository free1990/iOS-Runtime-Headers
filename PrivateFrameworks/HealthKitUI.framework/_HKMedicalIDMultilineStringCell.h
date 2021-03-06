/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSString, UILabel, UITextView;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell {
    NSString *_stringValue;
    UITextView *_textLabel;
    UILabel *_titleLabel;
}

@property(retain) NSString * stringValue;
@property(retain) NSString * title;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setStringValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)stringValue;
- (id)title;

@end
