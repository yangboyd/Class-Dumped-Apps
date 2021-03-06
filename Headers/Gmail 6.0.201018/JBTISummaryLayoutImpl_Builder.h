//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonBaseOptional;
@protocol ComGoogleCommonBaseSupplier, JBTActionableImage, JBTRichText;

@interface JBTISummaryLayoutImpl_Builder : NSObject
{
    id <JBTRichText> title_;
    id <JBTRichText> firstDetail_;
    id <JBTActionableImage> image_;
    id <JBTRichText> secondDetail_;
    ComGoogleCommonBaseOptional *badge_;
    ComGoogleCommonBaseOptional *entireLayoutAction_;
    ComGoogleCommonBaseOptional *componentContext_;
    id <ComGoogleCommonBaseSupplier> actionsSupplier_;
}

- (void)dealloc;
- (id)build;
- (id)setComponentContextWithJBTSmartMailComponentContext:(id)arg1;
- (id)setActionsSupplierWithComGoogleCommonBaseSupplier:(id)arg1;
- (id)setEntireLayoutActionWithJBTSmartMailAction:(id)arg1;
- (id)setBadgeWithComGoogleCommonBaseOptional:(id)arg1;
- (id)setActionableImageWithJBTActionableImage:(id)arg1;
- (id)setSecondDetailWithJBTRichText:(id)arg1;
- (id)setSecondDetailWithNSString:(id)arg1;
- (id)setFirstDetailWithJBTRichText:(id)arg1;
- (id)setFirstDetailWithNSString:(id)arg1;
- (id)setTitleWithNSString:(id)arg1;
- (id)setTitleWithJBTRichText:(id)arg1;

@end

