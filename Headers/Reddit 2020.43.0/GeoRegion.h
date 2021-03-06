//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface GeoRegion : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_code;
    NSString *_fullCode;
    NSArray *_subRegions;
}

+ (_Bool)supportsSecureCoding;
+ (id)globalRegionWithSubdivisionData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *subRegions; // @synthesize subRegions=_subRegions;
@property(copy, nonatomic) NSString *fullCode; // @synthesize fullCode=_fullCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)totalParam;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)subregionsWithNameContainingString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 code:(id)arg2;

@end

