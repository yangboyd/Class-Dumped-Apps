//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGCameraTrayItem.h>

@class NSString;

@interface IGCameraEffectTrayItem : IGCameraTrayItem
{
    NSString *_effectID;
    NSString *_creatorUsername;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *creatorUsername; // @synthesize creatorUsername=_creatorUsername;
@property(readonly, copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 creatorUsername:(id)arg2 accessibilityLabel:(id)arg3 image:(id)arg4 imageUrl:(id)arg5 shouldAllowMoreInfoAccess:(_Bool)arg6 shouldShowImageWhenCentered:(_Bool)arg7 effectID:(id)arg8;

@end

