//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSString;

@interface TFSTwitterNudge : NSObject <TFSModel>
{
    unsigned long long _nudgeType;
    NSString *_nudgeIdentifier;
}

+ (id)nudgeFromError:(id)arg1 createNudgeOperationErrorKey:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *nudgeIdentifier; // @synthesize nudgeIdentifier=_nudgeIdentifier;
@property(readonly, nonatomic) unsigned long long nudgeType; // @synthesize nudgeType=_nudgeType;
- (id)initWithNudgeType:(unsigned long long)arg1 nudgeIdentifier:(id)arg2;
- (id)init;

@end

