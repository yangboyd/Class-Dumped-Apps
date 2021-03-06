//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBMPData-Protocol.h>

@class NSDictionary, NSString;

@interface FBMPFilterConfig : NSObject <FBMPData>
{
    Class _filterClass;
    NSDictionary *_dictionary;
}

+ (id)configForFilterClass:(Class)arg1 withDictionary:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
- (void).cxx_destruct;
- (_Bool)matchesFilter:(id)arg1;
- (id)initWithFilterClass:(Class)arg1 dictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

