//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectThreadCreationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectThreadCreationViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallCreatorProtocol-Protocol.h>

@class IGUserSession, NSString;

@interface IGVideoCallCreator : NSObject <IGVideoCallCreatorProtocol, IGDirectThreadCreationViewControllerDelegate, IGDirectThreadCreationDelegate>
{
    IGUserSession *_userSession;
    NSString *_initialCowatchFacebookMediaId;
}

- (void).cxx_destruct;
- (void)threadCreationViewController:(id)arg1 didCreateThread:(id)arg2 entryPoint:(unsigned long long)arg3 context:(id)arg4;
- (void)threadCreationViewController:(id)arg1 didFailAddUserWithErrorMessage:(id)arg2;
- (void)threadCreationViewController:(id)arg1 didFailCreationWithErrorMessage:(id)arg2;
- (void)threadCreationViewControllerDidCancel:(id)arg1;
- (void)presentVideoCallCreationVCForUserSession:(id)arg1 cowatchMediaId:(id)arg2 entryPoint:(unsigned long long)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

