/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class MPMediaQuery, NSMutableDictionary, NSString;

@interface SKUIMediaQueryViewElement : SKUIViewElement {
    NSString *_cellFactoryFunctionName;
    MPMediaQuery *_mediaQuery;
    int _mediaQueryStyle;
    NSMutableDictionary *_propertyAggregrateFunctions;
}

@property(readonly) NSString * cellFactoryFunctionName;
@property(readonly) MPMediaQuery * mediaQuery;
@property(readonly) int mediaQueryStyle;

- (void).cxx_destruct;
- (id)cellFactoryFunctionName;
- (id)factoryRepresentationWithMediaEntity:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)mediaQuery;
- (int)mediaQueryStyle;
- (int)pageComponentType;

@end
