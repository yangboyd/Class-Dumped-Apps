//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGRealtimePatchOperation : NSObject <NSCopying>
{
    unsigned long long _type;
    NSString *_path;
    id _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringFromType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 path:(id)arg2 value:(id)arg3;

@end

