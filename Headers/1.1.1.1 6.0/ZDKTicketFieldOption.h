//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface ZDKTicketFieldOption : NSObject
{
    _Bool _isDefaultValue;
    NSNumber *_fieldOptionId;
    NSString *_name;
    NSString *_value;
}

@property(nonatomic) _Bool isDefaultValue; // @synthesize isDefaultValue=_isDefaultValue;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSNumber *fieldOptionId; // @synthesize fieldOptionId=_fieldOptionId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

