//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface ZDKUserField : NSObject
{
    // Error parsing type: , name: id
    // Error parsing type: , name: url
    // Error parsing type: , name: key
    // Error parsing type: , name: type
    // Error parsing type: , name: title
    // Error parsing type: , name: raw_title
    // Error parsing type: , name: fieldDescription
    // Error parsing type: , name: raw_description
    // Error parsing type: , name: position
    // Error parsing type: , name: active
    // Error parsing type: , name: system
    // Error parsing type: , name: regexp_for_validation
    // Error parsing type: , name: created_at
    // Error parsing type: , name: updated_at
    // Error parsing type: , name: custom_field_options
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSArray *custom_field_options;
@property(nonatomic, readonly) NSDate *updated_at;
@property(nonatomic, readonly) NSDate *created_at;
@property(nonatomic, readonly) NSString *regexp_for_validation;
@property(nonatomic, readonly) _Bool system; // @synthesize system;
@property(nonatomic, readonly) _Bool active; // @synthesize active;
@property(nonatomic, readonly) long long position; // @synthesize position;
@property(nonatomic, readonly) NSString *raw_description;
@property(nonatomic, readonly) NSString *fieldDescription;
@property(nonatomic, readonly) NSString *raw_title;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSString *fieldType;
@property(nonatomic, readonly) NSString *key;
@property(nonatomic, readonly) NSString *url;
@property(nonatomic, readonly) NSString *id;

@end

