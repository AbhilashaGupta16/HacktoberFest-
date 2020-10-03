const fs = require('fs');
const https = require('https');

function saveImageToDisk(url, path){
    var fullUrl = url;
    var localPath = fs.createWriteStream(path);
    try{
        var request = https.get(fullUrl, function(response){
            //console.log(response);
            response.pipe(localPath);
        });
    } catch( e ) {
        console.log( 'error', e );
    }
};

saveImageToDisk('https://random.dog/vh7i79y2qhhy.jpg',
'./image.jpg');
