//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/NSCoding-Protocol.h>
#import <TFSTwitterCore/TFSEncodable-Protocol.h>

@class NSString;

@interface TFSTwitterPlaceFoursquareInfo : NSObject <TFSEncodable, NSCoding>
{
    NSString *_venueId;
}

+ (id)encodableName;
@property(readonly, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithEncoder:(id)arg1;
- (id)initWithDecoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithVenueId:(id)arg1;

@end

