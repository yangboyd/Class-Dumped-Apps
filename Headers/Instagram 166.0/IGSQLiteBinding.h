//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGSQLiteBinding : NSObject
{
    id _value;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;

@end

