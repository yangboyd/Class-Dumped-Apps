//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, UIImage;

@interface SCAvatarBuilderMirrorResult : NSObject
{
    long long _status;
    NSDictionary *_avatar;
    UIImage *_debugCroppedImage;
}

@property(readonly, nonatomic) UIImage *debugCroppedImage; // @synthesize debugCroppedImage=_debugCroppedImage;
@property(readonly, nonatomic) NSDictionary *avatar; // @synthesize avatar=_avatar;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)arg1 avatar:(id)arg2 debugCroppedImage:(id)arg3;

@end

