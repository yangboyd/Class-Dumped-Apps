//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC17AspenUIComponents31FixedLayoutContentScreenBuilder : NSObject
{
    // Error parsing type: , name: fixedContent
    // Error parsing type: , name: footerViews
    // Error parsing type: , name: viewedHandler
}

+ (id)builder;
- (void).cxx_destruct;
- (id)addFooterViewWithCustomView:(id)arg1;
- (id)addLinkButtonFooterWithTitle:(id)arg1 pressedHandler:(CDUnknownBlockType)arg2;
- (id)addSecondaryButtonFooterWithTitle:(id)arg1 pressedHandler:(CDUnknownBlockType)arg2;
- (id)addPrimaryButtonFooterWithTitle:(id)arg1 pressedHandler:(CDUnknownBlockType)arg2;
- (id)setViewedHandlerWithHandler:(CDUnknownBlockType)arg1;
- (id)setAlertWithText:(id)arg1 type:(long long)arg2;
- (id)setDescriptionWithAttributedText:(id)arg1;
- (id)setDescriptionWithText:(id)arg1;
- (id)setWebViewWithRawHTMLString:(id)arg1 interactionBlock:(CDUnknownBlockType)arg2;
- (id)setWebViewWithUrlString:(id)arg1 interactionBlock:(CDUnknownBlockType)arg2;
- (id)setWebViewWithUrl:(id)arg1 interactionBlock:(CDUnknownBlockType)arg2;
- (id)setImageWithImageData:(id)arg1;
- (id)setImageWithUrlString:(id)arg1;
- (id)setImageWithUrl:(id)arg1;
- (id)setImageWithName:(id)arg1;
- (id)setVideoWithUrlString:(id)arg1 loopPlayback:(_Bool)arg2;
- (id)setVideoWithUrl:(id)arg1 loopPlayback:(_Bool)arg2;
- (id)setSubHeaderWithText:(id)arg1 alignment:(long long)arg2;
- (id)setHeaderWithText:(id)arg1 alignment:(long long)arg2;
- (id)setMetadataHeaderWithImageName:(id)arg1 leadingText:(id)arg2 trailingText:(id)arg3;
- (id)buildViewControllerWithJsonData:(id)arg1;
- (id)buildViewController;
- (id)init;

@end

