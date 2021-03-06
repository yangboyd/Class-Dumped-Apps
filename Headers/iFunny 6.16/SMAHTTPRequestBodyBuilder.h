//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAHTTPRequestPropertyMapperBuilding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SMAHTTPRequestBodyBuilder : NSObject <SMAHTTPRequestPropertyMapperBuilding>
{
    NSMutableDictionary *_items;
}

@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *body;
- (void)addMappedValues:(id)arg1;
- (void)addNumberAsIntegerValue:(id)arg1 forKey:(id)arg2;
- (void)addNumberAsBoolValue:(id)arg1 forKey:(id)arg2;
- (void)addNumberAsBoolIntegerValue:(id)arg1 forKey:(id)arg2;
- (void)addArrayValue:(id)arg1 forKey:(id)arg2;
- (void)addDictionaryValue:(id)arg1 forKey:(id)arg2;
- (void)addStringValue:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

