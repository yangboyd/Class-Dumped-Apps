//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol InternalPeopleService, SSOAuthorization;

@interface HMEPeopleDataService : NSObject
{
    id <SSOAuthorization> _authorization;
    id <InternalPeopleService> _peopleService;
}

@property(retain, nonatomic) id <InternalPeopleService> peopleService; // @synthesize peopleService=_peopleService;
@property(readonly, nonatomic) id <SSOAuthorization> authorization; // @synthesize authorization=_authorization;
- (void).cxx_destruct;
- (void)fetchPeopleDataWithExactEmails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAuthorization:(id)arg1;

@end

