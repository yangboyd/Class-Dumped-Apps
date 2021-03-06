//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface BDMAdNetworkConfigurationBuilder : NSObject
{
    NSString *_name;
    Class _networkClass;
    NSDictionary *_initializationParams;
    NSMutableDictionary *_units;
    double _preparationTimeout;
}

@property(nonatomic) double preparationTimeout; // @synthesize preparationTimeout=_preparationTimeout;
@property(copy, nonatomic) NSMutableDictionary *units; // @synthesize units=_units;
@property(copy, nonatomic) NSDictionary *initializationParams; // @synthesize initializationParams=_initializationParams;
@property(copy, nonatomic) Class networkClass; // @synthesize networkClass=_networkClass;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendInitializationParams;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendNetworkClass;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendAdUnit;
- (id)adUnits;
@property(readonly, copy, nonatomic) CDUnknownBlockType appendName;
- (id)init;

@end

