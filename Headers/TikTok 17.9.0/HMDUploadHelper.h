//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDInfo, HMDInjectedInfo;

@interface HMDUploadHelper : NSObject
{
    HMDInfo *_info;
    HMDInjectedInfo *_injecedInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) HMDInjectedInfo *injecedInfo; // @synthesize injecedInfo=_injecedInfo;
@property(retain, nonatomic) HMDInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)headerInfo;
- (id)init;

@end

