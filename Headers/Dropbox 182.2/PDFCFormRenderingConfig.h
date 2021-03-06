//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PDFCFormRenderingConfig : NSObject
{
    UIColor *_interactiveFormHighlightColor;
    UIColor *_requiredFormBorderColor;
    UIColor *_selectedListBoxHighlightColor;
}

+ (id)FormRenderingConfigWithInteractiveFormHighlightColor:(id)arg1 requiredFormBorderColor:(id)arg2 selectedListBoxHighlightColor:(id)arg3;
@property(readonly, nonatomic) UIColor *selectedListBoxHighlightColor; // @synthesize selectedListBoxHighlightColor=_selectedListBoxHighlightColor;
@property(readonly, nonatomic) UIColor *requiredFormBorderColor; // @synthesize requiredFormBorderColor=_requiredFormBorderColor;
@property(readonly, nonatomic) UIColor *interactiveFormHighlightColor; // @synthesize interactiveFormHighlightColor=_interactiveFormHighlightColor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInteractiveFormHighlightColor:(id)arg1 requiredFormBorderColor:(id)arg2 selectedListBoxHighlightColor:(id)arg3;

@end

