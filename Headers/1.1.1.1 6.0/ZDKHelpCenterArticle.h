//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface ZDKHelpCenterArticle : NSObject
{
    _Bool _outdated;
    NSNumber *_identifier;
    NSNumber *_section_id;
    NSString *_title;
    NSString *_body;
    NSString *_author_name;
    NSNumber *_author_id;
    NSString *_articleParents;
    NSDate *_created_at;
    long long _position;
    NSNumber *_voteSum;
    NSNumber *_voteCount;
    NSString *_locale;
    NSArray *_labelNames;
    NSString *_htmlUrl;
}

+ (id)parseHTMLString:(id)arg1;
+ (id)parseArticle:(id)arg1;
@property(copy, nonatomic) NSString *htmlUrl; // @synthesize htmlUrl=_htmlUrl;
@property(copy, nonatomic) NSArray *labelNames; // @synthesize labelNames=_labelNames;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSNumber *voteCount; // @synthesize voteCount=_voteCount;
@property(retain, nonatomic) NSNumber *voteSum; // @synthesize voteSum=_voteSum;
@property(nonatomic) _Bool outdated; // @synthesize outdated=_outdated;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSDate *created_at; // @synthesize created_at=_created_at;
@property(copy, nonatomic) NSString *articleParents; // @synthesize articleParents=_articleParents;
@property(copy, nonatomic) NSNumber *author_id; // @synthesize author_id=_author_id;
@property(copy, nonatomic) NSString *author_name; // @synthesize author_name=_author_name;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSNumber *section_id; // @synthesize section_id=_section_id;
@property(copy, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (long long)getDownvoteCount;
- (long long)getUpvoteCount;

@end

