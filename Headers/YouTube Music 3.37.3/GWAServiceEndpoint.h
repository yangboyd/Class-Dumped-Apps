//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GWAServiceEndpoint : NSObject
{
    NSString *_path;
    Class _responseClass;
}

@property(retain, nonatomic) Class responseClass; // @synthesize responseClass=_responseClass;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 responseClass:(Class)arg2;

@end

