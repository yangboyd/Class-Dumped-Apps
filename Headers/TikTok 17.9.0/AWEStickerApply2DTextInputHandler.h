//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEStickerApplyHandlerProtocol-Protocol.h"

@class AWE2DTextInputViewController, NSString, UIViewController;
@protocol ACCRecorderViewContainer;

@interface AWEStickerApply2DTextInputHandler : NSObject <AWEStickerApplyHandlerProtocol>
{
    UIViewController *_containerViewController;
    id <ACCRecorderViewContainer> _viewContainer;
    AWE2DTextInputViewController *_textInputViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWE2DTextInputViewController *textInputViewController; // @synthesize textInputViewController=_textInputViewController;
@property(nonatomic) __weak id <ACCRecorderViewContainer> viewContainer; // @synthesize viewContainer=_viewContainer;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void)camera:(id)arg1 didRecvMessage:(id)arg2;
- (id)initWithContainerViewController:(id)arg1 viewContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

