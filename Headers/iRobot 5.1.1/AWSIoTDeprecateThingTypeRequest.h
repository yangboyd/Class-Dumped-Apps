//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSNumber, NSString;

@interface AWSIoTDeprecateThingTypeRequest : AWSRequest
{
    NSString *_thingTypeName;
    NSNumber *_undoDeprecate;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *undoDeprecate; // @synthesize undoDeprecate=_undoDeprecate;
@property(retain, nonatomic) NSString *thingTypeName; // @synthesize thingTypeName=_thingTypeName;
- (void).cxx_destruct;

@end

