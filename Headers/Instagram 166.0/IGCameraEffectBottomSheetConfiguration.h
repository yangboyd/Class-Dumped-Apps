//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>
#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@interface IGCameraEffectBottomSheetConfiguration : IGValueObject <IGListDiffable, NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)previewConfigWithEffectID:(id)arg1 creatorID:(id)arg2 secondaryActions:(id)arg3 effectProduct:(id)arg4 imageURL:(id)arg5 title:(id)arg6 message:(id)arg7 moreByUsername:(id)arg8 moreByImageURL:(id)arg9 preferredCameraFacingPosition:(long long)arg10 saveState:(unsigned long long)arg11 primaryActions:(id)arg12 isContextSheetRedesign:(_Bool)arg13;
+ (id)shoppingConfigWithEffectID:(id)arg1 creatorID:(id)arg2 effectProduct:(id)arg3 productAvailable:(_Bool)arg4 imageURL:(id)arg5 attributedTitle:(id)arg6 moreByUsername:(id)arg7 moreByImageURL:(id)arg8 isSavedToWishlist:(_Bool)arg9 isAttribution:(_Bool)arg10;
+ (id)storyAttributionConfigWithEffectID:(id)arg1 creatorID:(id)arg2 secondaryActions:(id)arg3 imageURL:(id)arg4 title:(id)arg5 message:(id)arg6 moreByUsername:(id)arg7 preferredCameraFacingPosition:(long long)arg8 saveState:(unsigned long long)arg9 primaryActions:(id)arg10;
+ (id)trayConfigWithEffectID:(id)arg1 creatorID:(id)arg2 secondaryActions:(id)arg3 imageURL:(id)arg4 title:(id)arg5 message:(id)arg6 moreByUsername:(id)arg7 saveState:(unsigned long long)arg8 primaryActions:(id)arg9 displaysBrowseEffects:(_Bool)arg10 networkConsentRequired:(_Bool)arg11 displaysLicensing:(_Bool)arg12 isNetworkAccessAllowed:(_Bool)arg13;
+ (id)feedAttributionConfigWithEffectID:(id)arg1 creatorID:(id)arg2 secondaryActions:(id)arg3 effectProduct:(id)arg4 imageURL:(id)arg5 title:(id)arg6 moreByUsername:(id)arg7 preferredCameraFacingPosition:(long long)arg8 saveState:(unsigned long long)arg9 primaryActions:(id)arg10 displaysLicensing:(_Bool)arg11;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end

