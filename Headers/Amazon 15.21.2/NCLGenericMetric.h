//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface NCLGenericMetric : NSObject
{
    unsigned int _unit;
    NSDate *_timestamp;
    NSString *_metricKey;
    double _value;
    double _weight;
    NSDictionary *_dimensions;
    NSString *_obfuscatedMarketplaceId;
    NSString *_serviceName;
    NSString *_schemaId;
    NSString *_messageId;
    NSString *_producerId;
}

+ (id)unitToString:(unsigned int)arg1;
+ (id)generateRandomId;
@property(retain, nonatomic) NSString *producerId; // @synthesize producerId=_producerId;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSString *schemaId; // @synthesize schemaId=_schemaId;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *obfuscatedMarketplaceId; // @synthesize obfuscatedMarketplaceId=_obfuscatedMarketplaceId;
@property(retain, nonatomic) NSDictionary *dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) unsigned int unit; // @synthesize unit=_unit;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *metricKey; // @synthesize metricKey=_metricKey;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)convertToJson:(id)arg1;
- (id)getNexusFormatedJson;
- (id)initWithMetricKey:(id)arg1 andValue:(double)arg2;

@end

