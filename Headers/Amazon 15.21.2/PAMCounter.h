//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PAMCounter : NSObject
{
    long long _value;
    NSString *_name;
}

+ (id)sharedInstance:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)saveToUserDefaults;
- (void)loadFromUserDefaults;
- (long long)increment;
- (long long)add:(long long)arg1;
@property(nonatomic) long long value; // @synthesize value=_value;
- (id)init:(id)arg1 withValue:(long long)arg2;
- (id)init:(id)arg1;

@end

