//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleApiClientJsonGenericJson.h"

@class GASAuthor, NSString;

@interface GASAssignment : ComGoogleApiClientJsonGenericJson
{
    GASAuthor *assignee_;
    NSString *kind_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)java_clone;
- (id)setWithNSString:(id)arg1 withId:(id)arg2;
- (id)setKindWithNSString:(id)arg1;
- (id)getKind;
- (id)setAssigneeWithGASAuthor:(id)arg1;
- (id)getAssignee;
- (id)init;

@end

