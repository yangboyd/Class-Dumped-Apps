//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TikTokStudioSearchSugViewControllerProtocol-Protocol.h"

@class NSDictionary, NSString, UIViewController;
@protocol AWESearchSugViewControllerProtocol;

@interface TikTokStudioSearchSugViewControllerWrapper : NSObject <TikTokStudioSearchSugViewControllerProtocol>
{
    UIViewController<AWESearchSugViewControllerProtocol> *_wrapedVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController<AWESearchSugViewControllerProtocol> *wrapedVC; // @synthesize wrapedVC=_wrapedVC;
- (void)hideSearchSugView;
- (void)fetchSugWithQuery:(id)arg1 tabType:(unsigned long long)arg2;
- (id)currentQuery;
@property(copy, nonatomic) NSDictionary *logAdditionParams;
@property(nonatomic) unsigned long long currentTabType;
@property(copy, nonatomic) CDUnknownBlockType sugComplementTapBlock;
@property(copy, nonatomic) CDUnknownBlockType sugTapBlock;
@property(nonatomic, getter=isWhiteStyle) _Bool whiteStyle;
@property(readonly, nonatomic) UIViewController *VC;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

