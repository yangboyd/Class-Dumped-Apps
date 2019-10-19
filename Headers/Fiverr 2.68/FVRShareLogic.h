//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharingDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"

@class FVRUserService, NSString;

@interface FVRShareLogic : NSObject <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, FBSDKSharingDelegate>
{
    FVRUserService *_userService;
}

+ (void)shareTweetFromController:(id)arg1 withUrl:(id)arg2 urlDescription:(id)arg3;
+ (id)sharedInstance;
+ (void)presentNativeShareSheetWith:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)shareTypeFromShareTypeEnum:(int)arg1;
+ (id)shareTypeFrom:(id)arg1;
@property(retain, nonatomic) FVRUserService *userService; // @synthesize userService=_userService;
- (void).cxx_destruct;
- (void)getUserReferralLinkWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (id)getGaLabel:(int)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)encodeUrl:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (void)publishToFacebookWithShareDialogWithUrl:(id)arg1 urlDescription:(id)arg2 showFromController:(id)arg3;
- (void)shareFacebookFromController:(id)arg1 withUrl:(id)arg2 urlDescription:(id)arg3 defaultText:(id)arg4;
- (void)shareMailFromController:(id)arg1 withUrl:(id)arg2 urlDescription:(id)arg3 defaultText:(id)arg4;
- (void)shareWhatsappFromController:(id)arg1 withUrl:(id)arg2 urlDescription:(id)arg3;
- (void)shareSmsFromController:(id)arg1 withUrl:(id)arg2 urlDescription:(id)arg3;
- (void)shareToPlatform:(int)arg1 fromController:(id)arg2 withUrl:(id)arg3 imageUrl:(id)arg4 urlDescription:(id)arg5 defaultText:(id)arg6;
- (void)getOrderAttachmntShareLinkWithOrderItem:(id)arg1 attachmentItem:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getGigShareLinkWithGigId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

