//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol JSEncodable;

@interface JSResult : NSObject
{
    NSString *_errorMessage;
    id <JSEncodable> _data;
}

+ (id)success:(id)arg1;
+ (id)error:(id)arg1;
@property(retain, nonatomic) id <JSEncodable> data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void).cxx_destruct;
- (id)jsEncodableWithIdentifier:(id)arg1;

@end

