//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class KSApplicationInformation, KSPushInformation;

@interface PFARegisterApplicationInstallRequest : CoralModel <NSCoding, NSCopying>
{
    KSApplicationInformation *_applicationInformation;
    KSPushInformation *_pushInformation;
}

+ (id)type;
@property(retain, nonatomic) KSPushInformation *pushInformation; // @synthesize pushInformation=_pushInformation;
@property(retain, nonatomic) KSApplicationInformation *applicationInformation; // @synthesize applicationInformation=_applicationInformation;
- (void).cxx_destruct;

@end

