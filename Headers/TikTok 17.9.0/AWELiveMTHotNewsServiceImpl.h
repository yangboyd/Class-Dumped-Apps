//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveHotNewsService-Protocol.h"

@class NSString;

@interface AWELiveMTHotNewsServiceImpl : NSObject <IESLiveHotNewsService>
{
}

- (_Bool)enableLiveHotNews;
- (void)showHotNewsControllerWithParentController:(id)arg1 withTitle:(id)arg2 previousPage:(id)arg3 currentPage:(id)arg4 cellEnableClick:(_Bool)arg5 beforeJumpBlock:(CDUnknownBlockType)arg6 dismissBlock:(CDUnknownBlockType)arg7 completeBlock:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

