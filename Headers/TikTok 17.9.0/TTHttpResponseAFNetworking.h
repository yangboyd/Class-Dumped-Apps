//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTHttpResponse.h"

@class NSHTTPURLResponse;

@interface TTHttpResponseAFNetworking : TTHttpResponse
{
    NSHTTPURLResponse *_response;
}

@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (id)allHeaderFields;
- (long long)statusCode;
- (id)initWithNSURLResponse:(id)arg1;

@end

