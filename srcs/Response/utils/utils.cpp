#include "utils.hpp"

std::string ft::UtilsGlobal::DaysStr[] = {"Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri"};
std::string ft::UtilsGlobal::MonthStr[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
size_t		ft::UtilsGlobal::mimeTypesSize = 346;
std::pair<std::string, std::string> ft::UtilsGlobal::mimeTypes[] = {
	std::make_pair(".3gpp", "audio/3gpp"),
	std::make_pair(".jpm", "video/jpm"),
  	std::make_pair(".mp3", "audio/mp3"),
  	std::make_pair(".rtf", "text/rtf"),
  	std::make_pair(".wav", "audio/wave"),
  	std::make_pair(".xml", "text/xml"),
  	std::make_pair(".3g2", "video/3gpp2"),
  	std::make_pair(".3gp", "video/3gpp"),
  	std::make_pair(".3gpp", "video/3gpp"),
  	std::make_pair(".ac", "application/pkix-attr-cert"),
  	std::make_pair(".adp", "audio/adpcm"),
  	std::make_pair(".ai", "application/postscript"),
  std::make_pair(".apng", "image/apng"),
  std::make_pair(".appcache", "text/cache-manifest"),
  std::make_pair(".asc", "application/pgp-signature"),
  std::make_pair(".atom", "application/atom+xml"),
  std::make_pair(".atomcat", "application/atomcat+xml"),
  std::make_pair(".atomsvc", "application/atomsvc+xml"),
  std::make_pair(".au", "audio/basic"),
  std::make_pair(".aw", "application/applixware"),
  std::make_pair(".bdoc", "application/bdoc"),
  std::make_pair(".bin", "application/octet-stream"),
  std::make_pair(".bmp", "image/bmp"),
  std::make_pair(".bpk", "application/octet-stream"),
  std::make_pair(".buffer", "application/octet-stream"),
  std::make_pair(".ccxml", "application/ccxml+xml"),
  std::make_pair(".cdmia", "application/cdmi-capability"),
  std::make_pair(".cdmic", "application/cdmi-container"),
  std::make_pair(".cdmid", "application/cdmi-domain"),
  std::make_pair(".cdmio", "application/cdmi-object"),
  std::make_pair(".cdmiq", "application/cdmi-queue"),
  std::make_pair(".cer", "application/pkix-cert"),
  std::make_pair(".cgm", "image/cgm"),
  std::make_pair(".class", "application/java-vm"),
  std::make_pair(".coffee", "text/coffeescript"),
  std::make_pair(".conf", "text/plain"),
  std::make_pair(".cpt", "application/mac-compactpro"),
  std::make_pair(".crl", "application/pkix-crl"),
  std::make_pair(".css", "text/css"),
  std::make_pair(".csv", "text/csv"),
  std::make_pair(".cu", "application/cu-seeme"),
  std::make_pair(".davmount", "application/davmount+xml"),
  std::make_pair(".dbk", "application/docbook+xml"),
  std::make_pair(".deb", "application/octet-stream"),
  std::make_pair(".def", "text/plain"),
  std::make_pair(".deploy", "application/octet-stream"),
  std::make_pair(".disposition-notification", "message/disposition-notification"),
  std::make_pair(".dist", "application/octet-stream"),
  std::make_pair(".distz", "application/octet-stream"),
  std::make_pair(".dll", "application/octet-stream"),
  std::make_pair(".dmg", "application/octet-stream"),
  std::make_pair(".dms", "application/octet-stream"),
  std::make_pair(".doc", "application/msword"),
  std::make_pair(".dot", "application/msword"),
  std::make_pair(".drle", "image/dicom-rle"),
  std::make_pair(".dssc", "application/dssc+der"),
  std::make_pair(".dtd", "application/xml-dtd"),
  std::make_pair(".dump", "application/octet-stream"),
  std::make_pair(".ear", "application/java-archive"),
  std::make_pair(".ecma", "application/ecmascript"),
  std::make_pair(".elc", "application/octet-stream"),
  std::make_pair(".emf", "image/emf"),
  std::make_pair(".eml", "message/rfc822"),
  std::make_pair(".emma", "application/emma+xml"),
  std::make_pair(".eps", "application/postscript"),
  std::make_pair(".epub", "application/epub+zip"),
  std::make_pair(".es", "application/ecmascript"),
  std::make_pair(".exe", "application/octet-stream"),
  std::make_pair(".exi", "application/exi"),
  std::make_pair(".exr", "image/aces"),
  std::make_pair(".ez", "application/andrew-inset"),
  std::make_pair(".fits", "image/fits"),
  std::make_pair(".g3", "image/g3fax"),
  std::make_pair(".gbr", "application/rpki-ghostbusters"),
  std::make_pair(".geojson", "application/geo+json"),
  std::make_pair(".gif", "image/gif"),
  std::make_pair(".glb", "model/gltf-binary"),
  std::make_pair(".gltf", "model/gltf+json"),
  std::make_pair(".gml", "application/gml+xml"),
  std::make_pair(".gpx", "application/gpx+xml"),
  std::make_pair(".gram", "application/srgs"),
  std::make_pair(".grxml", "application/srgs+xml"),
  std::make_pair(".gxf", "application/gxf"),
  std::make_pair(".gz", "application/gzip"),
  std::make_pair(".h261", "video/h261"),
  std::make_pair(".h263", "video/h263"),
  std::make_pair(".h264", "video/h264"),
  std::make_pair(".heic", "image/heic"),
  std::make_pair(".heics", "image/heic-sequence"),
  std::make_pair(".heif", "image/heif"),
  std::make_pair(".heifs", "image/heif-sequence"),
  std::make_pair(".hjson", "application/hjson"),
  std::make_pair(".hlp", "application/winhlp"),
  std::make_pair(".hqx", "application/mac-binhex40"),
  std::make_pair(".htm", "text/html"),
  std::make_pair(".html", "text/html"),
  std::make_pair(".ics", "text/calendar"),
  std::make_pair(".ief", "image/ief"),
  std::make_pair(".ifb", "text/calendar"),
  std::make_pair(".iges", "model/iges"),
  std::make_pair(".igs", "model/iges"),
  std::make_pair(".img", "application/octet-stream"),
  std::make_pair(".in", "text/plain"),
  std::make_pair(".ini", "text/plain"),
  std::make_pair(".ink", "application/inkml+xml"),
  std::make_pair(".inkml", "application/inkml+xml"),
  std::make_pair(".ipfix", "application/ipfix"),
  std::make_pair(".iso", "application/octet-stream"),
  std::make_pair(".jade", "text/jade"),
  std::make_pair(".jar", "application/java-archive"),
  std::make_pair(".jls", "image/jls"),
  std::make_pair(".jp2", "image/jp2"),
  std::make_pair(".jpe", "image/jpeg"),
  std::make_pair(".jpeg", "image/jpeg"),
  std::make_pair(".jpf", "image/jpx"),
  std::make_pair(".jpg", "image/jpeg"),
  std::make_pair(".jpg2", "image/jp2"),
  std::make_pair(".jpgm", "video/jpm"),
  std::make_pair(".jpgv", "video/jpeg"),
  std::make_pair(".jpm", "image/jpm"),
  std::make_pair(".jpx", "image/jpx"),
  std::make_pair(".js", "application/javascript"),
  std::make_pair(".json", "application/json"),
  std::make_pair(".json5", "application/json5"),
  std::make_pair(".jsonld", "application/ld+json"),
  std::make_pair(".jsonml", "application/jsonml+json"),
  std::make_pair(".jsx", "text/jsx"),
  std::make_pair(".kar", "audio/midi"),
  std::make_pair(".ktx", "image/ktx"),
  std::make_pair(".less", "text/less"),
  std::make_pair(".list", "text/plain"),
  std::make_pair(".litcoffee", "text/coffeescript"),
  std::make_pair(".log", "text/plain"),
  std::make_pair(".lostxml", "application/lost+xml"),
  std::make_pair(".lrf", "application/octet-stream"),
  std::make_pair(".m1v", "video/mpeg"),
  std::make_pair(".m21", "application/mp21"),
  std::make_pair(".m2a", "audio/mpeg"),
  std::make_pair(".m2v", "video/mpeg"),
  std::make_pair(".m3a", "audio/mpeg"),
  std::make_pair(".m4a", "audio/mp4"),
  std::make_pair(".m4p", "application/mp4"),
  std::make_pair(".ma", "application/mathematica"),
  std::make_pair(".mads", "application/mads+xml"),
  std::make_pair(".man", "text/troff"),
  std::make_pair(".manifest", "text/cache-manifest"),
  std::make_pair(".map", "application/json"),
  std::make_pair(".mar", "application/octet-stream"),
  std::make_pair(".markdown", "text/markdown"),
  std::make_pair(".mathml", "application/mathml+xml"),
  std::make_pair(".mb", "application/mathematica"),
  std::make_pair(".mbox", "application/mbox"),
  std::make_pair(".md", "text/markdown"),
  std::make_pair(".me", "text/troff"),
  std::make_pair(".mesh", "model/mesh"),
  std::make_pair(".meta4", "application/metalink4+xml"),
  std::make_pair(".metalink", "application/metalink+xml"),
  std::make_pair(".mets", "application/mets+xml"),
  std::make_pair(".mft", "application/rpki-manifest"),
  std::make_pair(".mid", "audio/midi"),
  std::make_pair(".midi", "audio/midi"),
  std::make_pair(".mime", "message/rfc822"),
  std::make_pair(".mj2", "video/mj2"),
  std::make_pair(".mjp2", "video/mj2"),
  std::make_pair(".mjs", "application/javascript"),
  std::make_pair(".mml", "text/mathml"),
  std::make_pair(".mods", "application/mods+xml"),
  std::make_pair(".mov", "video/quicktime"),
  std::make_pair(".mp2", "audio/mpeg"),
  std::make_pair(".mp21", "application/mp21"),
  std::make_pair(".mp2a", "audio/mpeg"),
  std::make_pair(".mp3", "audio/mpeg"),
  std::make_pair(".mp4", "video/mp4"),
  std::make_pair(".mp4a", "audio/mp4"),
  std::make_pair(".mp4s", "application/mp4"),
  std::make_pair(".mp4v", "video/mp4"),
  std::make_pair(".mpd", "application/dash+xml"),
  std::make_pair(".mpe", "video/mpeg"),
  std::make_pair(".mpeg", "video/mpeg"),
  std::make_pair(".mpg", "video/mpeg"),
  std::make_pair(".mpg4", "video/mp4"),
  std::make_pair(".mpga", "audio/mpeg"),
  std::make_pair(".mrc", "application/marc"),
  std::make_pair(".mrcx", "application/marcxml+xml"),
  std::make_pair(".ms", "text/troff"),
  std::make_pair(".mscml", "application/mediaservercontrol+xml"),
  std::make_pair(".msh", "model/mesh"),
  std::make_pair(".msi", "application/octet-stream"),
  std::make_pair(".msm", "application/octet-stream"),
  std::make_pair(".msp", "application/octet-stream"),
  std::make_pair(".mxf", "application/mxf"),
  std::make_pair(".cpp", "text/x-c"),
  std::make_pair(".c", "text/x-c"),
  std::make_pair(".mxml", "application/xv+xml"),
  std::make_pair(".n3", "text/n3"),
  std::make_pair(".nb", "application/mathematica"),
  std::make_pair(".oda", "application/oda"),
  std::make_pair(".oga", "audio/ogg"),
  std::make_pair(".ogg", "audio/ogg"),
  std::make_pair(".ogv", "video/ogg"),
  std::make_pair(".ogx", "application/ogg"),
  std::make_pair(".omdoc", "application/omdoc+xml"),
  std::make_pair(".onepkg", "application/onenote"),
  std::make_pair(".onetmp", "application/onenote"),
  std::make_pair(".onetoc", "application/onenote"),
  std::make_pair(".onetoc2", "application/onenote"),
  std::make_pair(".opf", "application/oebps-package+xml"),
  std::make_pair(".otf", "font/otf"),
  std::make_pair(".owl", "application/rdf+xml"),
  std::make_pair(".oxps", "application/oxps"),
  std::make_pair(".p10", "application/pkcs10"),
  std::make_pair(".p7c", "application/pkcs7-mime"),
  std::make_pair(".p7m", "application/pkcs7-mime"),
  std::make_pair(".p7s", "application/pkcs7-signature"),
  std::make_pair(".p8", "application/pkcs8"),
  std::make_pair(".pdf", "application/pdf"),
  std::make_pair(".pfr", "application/font-tdpfr"),
  std::make_pair(".pgp", "application/pgp-encrypted"),
  std::make_pair(".pkg", "application/octet-stream"),
  std::make_pair(".pki", "application/pkixcmp"),
  std::make_pair(".pkipath", "application/pkix-pkipath"),
  std::make_pair(".pls", "application/pls+xml"),
  std::make_pair(".png", "image/png"),
  std::make_pair(".prf", "application/pics-rules"),
  std::make_pair(".ps", "application/postscript"),
  std::make_pair(".pskcxml", "application/pskc+xml"),
  std::make_pair(".qt", "video/quicktime"),
  std::make_pair(".raml", "application/raml+yaml"),
  std::make_pair(".rdf", "application/rdf+xml"),
  std::make_pair(".rif", "application/reginfo+xml"),
  std::make_pair(".rl", "application/resource-lists+xml"),
  std::make_pair(".rld", "application/resource-lists-diff+xml"),
  std::make_pair(".rmi", "audio/midi"),
  std::make_pair(".rnc", "application/relax-ng-compact-syntax"),
  std::make_pair(".rng", "application/xml"),
  std::make_pair(".roa", "application/rpki-roa"),
  std::make_pair(".roff", "text/troff"),
  std::make_pair(".rq", "application/sparql-query"),
  std::make_pair(".rs", "application/rls-services+xml"),
  std::make_pair(".rsd", "application/rsd+xml"),
  std::make_pair(".rss", "application/rss+xml"),
  std::make_pair(".rtf", "application/rtf"),
  std::make_pair(".rtx", "text/richtext"),
  std::make_pair(".s3m", "audio/s3m"),
  std::make_pair(".sbml", "application/sbml+xml"),
  std::make_pair(".scq", "application/scvp-cv-request"),
  std::make_pair(".scs", "application/scvp-cv-response"),
  std::make_pair(".sdp", "application/sdp"),
  std::make_pair(".ser", "application/java-serialized-object"),
  std::make_pair(".setpay", "application/set-payment-initiation"),
  std::make_pair(".setreg", "application/set-registration-initiation"),
  std::make_pair(".sgi", "image/sgi"),
  std::make_pair(".sgm", "text/sgml"),
  std::make_pair(".sgml", "text/sgml"),
  std::make_pair(".shex", "text/shex"),
  std::make_pair(".shf", "application/shf+xml"),
  std::make_pair(".shtml", "text/html"),
  std::make_pair(".sig", "application/pgp-signature"),
  std::make_pair(".sil", "audio/silk"),
  std::make_pair(".silo", "model/mesh"),
  std::make_pair(".slim", "text/slim"),
  std::make_pair(".slm", "text/slim"),
  std::make_pair(".smi", "application/smil+xml"),
  std::make_pair(".smil", "application/smil+xml"),
  std::make_pair(".snd", "audio/basic"),
  std::make_pair(".so", "application/octet-stream"),
  std::make_pair(".spp", "application/scvp-vp-response"),
  std::make_pair(".spq", "application/scvp-vp-request"),
  std::make_pair(".spx", "audio/ogg"),
  std::make_pair(".sru", "application/sru+xml"),
  std::make_pair(".srx", "application/sparql-results+xml"),
  std::make_pair(".ssdl", "application/ssdl+xml"),
  std::make_pair(".ssml", "application/ssml+xml"),
  std::make_pair(".stk", "application/hyperstudio"),
  std::make_pair(".styl", "text/stylus"),
  std::make_pair(".stylus", "text/stylus"),
  std::make_pair(".svg", "image/svg+xml"),
  std::make_pair(".svgz", "image/svg+xml"),
  std::make_pair(".t", "text/troff"),
  std::make_pair(".t38", "image/t38"),
  std::make_pair(".tei", "application/tei+xml"),
  std::make_pair(".teicorpus", "application/tei+xml"),
  std::make_pair(".text", "text/plain"),
  std::make_pair(".tfi", "application/thraud+xml"),
  std::make_pair(".tfx", "image/tiff-fx"),
  std::make_pair(".tif", "image/tiff"),
  std::make_pair(".tiff", "image/tiff"),
  std::make_pair(".tr", "text/troff"),
  std::make_pair(".ts", "video/mp2t"),
  std::make_pair(".tsd", "application/timestamped-data"),
  std::make_pair(".tsv", "text/tab-separated-values"),
  std::make_pair(".ttc", "font/collection"),
  std::make_pair(".ttf", "font/ttf"),
  std::make_pair(".ttl", "text/turtle"),
  std::make_pair(".txt", "text/plain"),
  std::make_pair(".u8dsn", "message/global-delivery-status"),
  std::make_pair(".u8hdr", "message/global-headers"),
  std::make_pair(".u8mdn", "message/global-disposition-notification"),
  std::make_pair(".u8msg", "message/global"),
  std::make_pair(".uri", "text/uri-list"),
  std::make_pair(".uris", "text/uri-list"),
  std::make_pair(".urls", "text/uri-list"),
  std::make_pair(".vcard", "text/vcard"),
  std::make_pair(".vrml", "model/vrml"),
  std::make_pair(".vtt", "text/vtt"),
  std::make_pair(".vxml", "application/voicexml+xml"),
  std::make_pair(".war", "application/java-archive"),
  std::make_pair(".wasm", "application/wasm"),
  std::make_pair(".wav", "audio/wav"),
  std::make_pair(".weba", "audio/webm"),
  std::make_pair(".webm", "video/webm"),
  std::make_pair(".webmanifest", "application/manifest+json"),
  std::make_pair(".webp", "image/webp"),
  std::make_pair(".wgt", "application/widget"),
  std::make_pair(".wmf", "image/wmf"),
  std::make_pair(".woff", "font/woff"),
  std::make_pair(".woff2", "font/woff2"),
  std::make_pair(".wrl", "model/vrml"),
  std::make_pair(".wsdl", "application/wsdl+xml"),
  std::make_pair(".wspolicy", "application/wspolicy+xml"),
  std::make_pair(".x3d", "model/x3d+xml"),
  std::make_pair(".x3db", "model/x3d+binary"),
  std::make_pair(".x3dbz", "model/x3d+binary"),
  std::make_pair(".x3dv", "model/x3d+vrml"),
  std::make_pair(".x3dvz", "model/x3d+vrml"),
  std::make_pair(".x3dz", "model/x3d+xml"),
  std::make_pair(".xaml", "application/xaml+xml"),
  std::make_pair(".xdf", "application/xcap-diff+xml"),
  std::make_pair(".xdssc", "application/dssc+xml"),
  std::make_pair(".xenc", "application/xenc+xml"),
  std::make_pair(".xer", "application/patch-ops-error+xml"),
  std::make_pair(".xht", "application/xhtml+xml"),
  std::make_pair(".xhtml", "application/xhtml+xml"),
  std::make_pair(".xhvml", "application/xv+xml"),
  std::make_pair(".xm", "audio/xm"),
  std::make_pair(".xml", "application/xml"),
  std::make_pair(".xop", "application/xop+xml"),
  std::make_pair(".xpl", "application/xproc+xml"),
  std::make_pair(".xsd", "application/xml"),
  std::make_pair(".xsl", "application/xml"),
  std::make_pair(".xslt", "application/xslt+xml"),
  std::make_pair(".xspf", "application/xspf+xml"),
  std::make_pair(".xvm", "application/xv+xml"),
  std::make_pair(".xvml", "application/xv+xml"),
  std::make_pair(".yaml", "text/yaml"),
  std::make_pair(".yang", "application/yang"),
  std::make_pair(".yin", "application/yin+xml"),
  std::make_pair(".yml", "text/yaml"),
  std::make_pair(".zip", "application/zip")
};

const char 	* ft::UtilsGlobal::ExtenstionNotFound::what() const throw()
{
	return ("Extension Not Found\n");
}

const char	* ft::UtilsGlobal::FileWithoutExtension::what() const throw()
{
	return ("FILE Doesn't Have An Extension");
}
std::string ft::getCurrentTime(void)
{
	std::stringstream		s;
	std::time_t time =  std::time(NULL);
	std::tm 	*currentTime = std::localtime(&time);
	s << UtilsGlobal::DaysStr[currentTime->tm_wday] << ", " << std::setw(2) << std::setfill('0'); 
	s << currentTime->tm_mday << " " << UtilsGlobal::MonthStr[currentTime->tm_mon]<< " " <<  currentTime->tm_year + 1900  <<  " ";
	s << std::setw(2) << std::setfill('0') << currentTime->tm_hour << ":" << std::setw(2) << std::setfill('0') << currentTime->tm_min << ":" << std::setw(2) << std::setfill('0') << currentTime->tm_sec << " GMT";
	return (s.str());
}

std::string		ft::getFileModifiedDate(const char *path)
{
	struct stat				attr;
	std::stringstream		s;
	std::tm * 				modifiedTime;
	stat(path, &attr);
	modifiedTime = std::localtime(&(attr.st_mtime));
	s << UtilsGlobal::DaysStr[modifiedTime->tm_wday] << ", " << std::setw(2) << std::setfill('0'); 
	s << modifiedTime->tm_mday << " " << UtilsGlobal::MonthStr[modifiedTime->tm_mon]<< " " <<  modifiedTime->tm_year + 1900  <<  " ";
	s << std::setw(2) << std::setfill('0') << modifiedTime->tm_hour << ":" << std::setw(2) << std::setfill('0') << modifiedTime->tm_min << ":" << std::setw(2) << std::setfill('0') << modifiedTime->tm_sec << " GMT";
	return (s.str());
}

std::string		ft::getFileExtension(const std::string & file)
{
	int		length;

	length  = file.length();
	while (--length >= 0)
	{
		if (file[length] == '.')
			break;
	}
	if (length < 0)
      return ("text/plain");
	return (file.substr(length, file.length()));
}


std::string		ft::getContentType(const std::string & file)
{
	std::string extension;
	extension = getFileExtension(file);
	for (size_t index = 0; index < UtilsGlobal::mimeTypesSize; index++)
	{
		if (extension == UtilsGlobal::mimeTypes[index].first)
			return (UtilsGlobal::mimeTypes[index].second);
	}
  return ("text/plain");
}

off_t	 	ft::getFileSize(const char * file)
{
	struct stat attrs;
	if (stat(file, &attrs) == -1)
		return (-1);
	return (attrs.st_size);
}