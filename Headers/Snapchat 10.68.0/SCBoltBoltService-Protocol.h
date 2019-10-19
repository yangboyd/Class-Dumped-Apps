//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCProtoCall, SCBoltAdminDeleteContentsRequest, SCBoltClaimContentRequest, SCBoltClaimVariantsRequest, SCBoltCreateFromBytesRequest, SCBoltCreateFromReferenceRequest, SCBoltCreateFromReferencesRequest, SCBoltDeleteContentRequest, SCBoltGetClientRulesRequest, SCBoltGetContentDescriptorsRequest, SCBoltGetFreshContentObjectRequest, SCBoltGetFreshContentObjectsRequest, SCBoltGetNetworkMappingRequest, SCBoltGetUploadLocationsRequest, SCBoltReleaseClaimsRequest;

@protocol SCBoltBoltService <NSObject>
- (GRPCProtoCall *)RPCTogetFreshContentObjectWithRequest:(SCBoltGetFreshContentObjectRequest *)arg1 handler:(void (^)(SCBoltGetFreshContentObjectResponse *, NSError *))arg2;
- (void)getFreshContentObjectWithRequest:(SCBoltGetFreshContentObjectRequest *)arg1 handler:(void (^)(SCBoltGetFreshContentObjectResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTogetFreshContentObjectsWithRequest:(SCBoltGetFreshContentObjectsRequest *)arg1 handler:(void (^)(SCBoltGetFreshContentObjectsResponse *, NSError *))arg2;
- (void)getFreshContentObjectsWithRequest:(SCBoltGetFreshContentObjectsRequest *)arg1 handler:(void (^)(SCBoltGetFreshContentObjectsResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToreleaseClaimsWithRequest:(SCBoltReleaseClaimsRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (void)releaseClaimsWithRequest:(SCBoltReleaseClaimsRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (GRPCProtoCall *)RPCTodeleteContentWithRequest:(SCBoltDeleteContentRequest *)arg1 handler:(void (^)(SCBoltDeleteContentResponse *, NSError *))arg2;
- (void)deleteContentWithRequest:(SCBoltDeleteContentRequest *)arg1 handler:(void (^)(SCBoltDeleteContentResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTogetClientRulesWithRequest:(SCBoltGetClientRulesRequest *)arg1 handler:(void (^)(SCBoltGetClientRulesResponse *, NSError *))arg2;
- (void)getClientRulesWithRequest:(SCBoltGetClientRulesRequest *)arg1 handler:(void (^)(SCBoltGetClientRulesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTogetNetworkMappingWithRequest:(SCBoltGetNetworkMappingRequest *)arg1 handler:(void (^)(SCBoltGetNetworkMappingResponse *, NSError *))arg2;
- (void)getNetworkMappingWithRequest:(SCBoltGetNetworkMappingRequest *)arg1 handler:(void (^)(SCBoltGetNetworkMappingResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTogetContentDescriptorsWithRequest:(SCBoltGetContentDescriptorsRequest *)arg1 handler:(void (^)(SCBoltGetContentDescriptorsResponse *, NSError *))arg2;
- (void)getContentDescriptorsWithRequest:(SCBoltGetContentDescriptorsRequest *)arg1 handler:(void (^)(SCBoltGetContentDescriptorsResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTogetUploadLocationsWithRequest:(SCBoltGetUploadLocationsRequest *)arg1 handler:(void (^)(SCBoltGetUploadLocationsResponse *, NSError *))arg2;
- (void)getUploadLocationsWithRequest:(SCBoltGetUploadLocationsRequest *)arg1 handler:(void (^)(SCBoltGetUploadLocationsResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTocreateFromReferencesWithRequest:(SCBoltCreateFromReferencesRequest *)arg1 handler:(void (^)(SCBoltCreateFromReferencesResponse *, NSError *))arg2;
- (void)createFromReferencesWithRequest:(SCBoltCreateFromReferencesRequest *)arg1 handler:(void (^)(SCBoltCreateFromReferencesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTocreateFromReferenceWithRequest:(SCBoltCreateFromReferenceRequest *)arg1 handler:(void (^)(SCBoltCreateFromReferenceResponse *, NSError *))arg2;
- (void)createFromReferenceWithRequest:(SCBoltCreateFromReferenceRequest *)arg1 handler:(void (^)(SCBoltCreateFromReferenceResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCTocreateFromBytesWithRequest:(SCBoltCreateFromBytesRequest *)arg1 handler:(void (^)(SCBoltCreateFromBytesResponse *, NSError *))arg2;
- (void)createFromBytesWithRequest:(SCBoltCreateFromBytesRequest *)arg1 handler:(void (^)(SCBoltCreateFromBytesResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToclaimVariantsWithRequest:(SCBoltClaimVariantsRequest *)arg1 handler:(void (^)(SCBoltClaimVariantsResponse *, NSError *))arg2;
- (void)claimVariantsWithRequest:(SCBoltClaimVariantsRequest *)arg1 handler:(void (^)(SCBoltClaimVariantsResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToclaimContentWithRequest:(SCBoltClaimContentRequest *)arg1 handler:(void (^)(SCBoltClaimContentResponse *, NSError *))arg2;
- (void)claimContentWithRequest:(SCBoltClaimContentRequest *)arg1 handler:(void (^)(SCBoltClaimContentResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToadminDeleteContentsWithRequest:(SCBoltAdminDeleteContentsRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
- (void)adminDeleteContentsWithRequest:(SCBoltAdminDeleteContentsRequest *)arg1 handler:(void (^)(GPBEmpty *, NSError *))arg2;
@end

