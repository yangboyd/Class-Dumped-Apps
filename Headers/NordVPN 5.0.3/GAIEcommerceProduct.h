//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GAIEcommerceProduct : NSObject
{
    NSMutableDictionary *_parameters;
}

@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)buildWithListIndex:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (id)buildWithIndex:(unsigned long long)arg1;
- (id)setCustomMetric:(unsigned long long)arg1 value:(id)arg2;
- (id)setCustomDimension:(unsigned long long)arg1 value:(id)arg2;
- (id)setPosition:(id)arg1;
- (id)setCouponCode:(id)arg1;
- (id)setQuantity:(id)arg1;
- (id)setPrice:(id)arg1;
- (id)setVariant:(id)arg1;
- (id)setCategory:(id)arg1;
- (id)setBrand:(id)arg1;
- (id)setName:(id)arg1;
- (id)setId:(id)arg1;
- (id)setNumber:(id)arg1 forKey:(id)arg2;
- (id)setString:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

