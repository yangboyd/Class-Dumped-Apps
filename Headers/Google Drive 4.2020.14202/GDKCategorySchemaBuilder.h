//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface GDKCategorySchemaBuilder : NSObject
{
    NSArray *_attributes_10;
    NSString *_categoryName;
    NSString *_title;
    NSString *_categoryDescription;
    NSNumber *_attributes_hazzer;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithCategoryName:(id)arg1 title:(id)arg2 categoryDescription:(id)arg3;
@property(retain, nonatomic) NSNumber *attributes_hazzer; // @synthesize attributes_hazzer=_attributes_hazzer;
@property(retain, nonatomic) NSString *categoryDescription; // @synthesize categoryDescription=_categoryDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (id)build;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes_10;

@end

