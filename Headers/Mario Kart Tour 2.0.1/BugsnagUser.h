//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BugsnagUser : NSObject
{
    NSString *_userId;
    NSString *_name;
    NSString *_emailAddress;
}

+ (id)userWithUserId:(id)arg1 name:(id)arg2 emailAddress:(id)arg3;
@property(retain) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)toJson;
- (id)initWithUserId:(id)arg1 name:(id)arg2 emailAddress:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end

