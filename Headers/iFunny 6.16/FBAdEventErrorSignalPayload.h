//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/NSCopying-Protocol.h>
#import <Funny/NSMutableCopying-Protocol.h>

@class NSString;

@interface FBAdEventErrorSignalPayload : NSObject <NSCopying, NSMutableCopying>
{
    unsigned long long _type;
    NSString *_errorDescription;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPayload:(id)arg1;
- (id)init;

@end

