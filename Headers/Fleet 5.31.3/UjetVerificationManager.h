//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UjetBaseModel;

@interface UjetVerificationManager : NSObject
{
    _Bool _inVerification;
    _Bool _deferToVerify;
    UjetBaseModel *_commModel;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UjetBaseModel *commModel; // @synthesize commModel=_commModel;
@property(nonatomic) _Bool deferToVerify; // @synthesize deferToVerify=_deferToVerify;
- (void).cxx_destruct;
- (void)clear;
- (_Bool)canVerify;
- (_Bool)isVerifying;
- (void)showVerification:(id)arg1;

@end

