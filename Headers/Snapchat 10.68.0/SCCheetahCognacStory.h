//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCCognacAppDataModel;

@interface SCCheetahCognacStory : NSObject <NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_subtitle;
    SCCognacAppDataModel *_appDataModel;
}

@property(readonly, copy, nonatomic) SCCognacAppDataModel *appDataModel; // @synthesize appDataModel=_appDataModel;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 appDataModel:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

