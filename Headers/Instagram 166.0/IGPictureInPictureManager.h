//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/PIPFloatingWindowManager.h>

#import <InstagramAppCoreFramework/IGUserSessionEndingObject-Protocol.h>

@class IGUserDefaults;

@interface IGPictureInPictureManager : PIPFloatingWindowManager <IGUserSessionEndingObject>
{
    IGUserDefaults *_sessionUserDefaults;
}

- (void).cxx_destruct;
- (void)destroyFloatingWindow;
- (void)snapIntoFloatingWindowWithViewController:(id)arg1 fromView:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)restoreIfNecessaryWithUserSession:(id)arg1;
- (void)userSessionWillEnd;
- (id)initWithSessionUserDefaults:(id)arg1;

@end

